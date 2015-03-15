#include "SingleApplication.h"

#include "Define.h"
#include "MainWindow.h"
#include "Message.h"

#include <QDir>
#include <QFile>
#include <QMessageBox>
#include <QPalette>
#include <QProcess>
#include <QSplashScreen>
#include <QTimer>

void
myMessageHandler (
                 QtMsgType type,
                 const char * message)
{

    QStringList log = QStringList ()  << "" << "Warning" << "Critical" << "Fatal";

    QFile outFile(QDir::tempPath () + SLASH + LOG_FILE_NAME);
    outFile.open(QIODevice::WriteOnly | QIODevice::Append);

    QTextStream file(&outFile);
    QTextStream stde(stderr);

    file << log.at(type) << QString (message) << endl;
    stde << log.at(type) << QString (message) << endl;
}

int
main(
    int argc,
    char *argv[])
{

    SingleApplication application(argc, argv,
                                  "1b5f3e5f-46c3-41ca-ab7c-7564958cbc81"
                                  "fd0331ee-4b02-4cb4-a829-7c727102dfbf");

    if (application.isRunning())
    {

        application.sendMessage("Message from other instace");
        return(0);
    }

    if (false == QSystemTrayIcon::isSystemTrayAvailable())
    {

        QMessageBox::critical(0,
                              QObject::tr("System"),
                              QObject::tr("No System Tray on this system."));
        return(1);
    }


#ifdef Q_OS_WIN
    application.setFont(QFont("Helvetica",9));
#endif // Q_OS_WIN

    qInstallMsgHandler(myMessageHandler);
    qRegisterMetaType<Contact> ("Contact");
    qRegisterMetaType<Message> ("Message");

    qApp->addLibraryPath (qApp->applicationDirPath ());

    QFile style (QApplication::applicationDirPath () + SLASH + "style");
    style.open (QIODevice::ReadOnly);
    QTextStream textStream(&style);
    application.setStyleSheet (textStream.readAll ());
    style.close ();


    QSplashScreen splash(QPixmap(SPLASH_SCREEN));
    splash.show();
    application.processEvents();

    MainWindow mainWindow;
    mainWindow.setWindowFlags(Qt::FramelessWindowHint |
                              Qt::WindowSystemMenuHint);

    mainWindow.setWindowIcon(QIcon(APPLICATION_ICON));
    mainWindow.setWindowTitle (APPLICATION_NAME);
    mainWindow.setFixedSize (750, 550);
    mainWindow.setAttribute(Qt::WA_TranslucentBackground);

    QObject::connect (&application,
                      SIGNAL(applicationMessageAvailable (QString)),
                      &mainWindow,
                      SLOT(onApplicationMessageAvailable (QString)));

#ifdef Q_OS_WIN
    QProcess::startDetached (QApplication::applicationDirPath ()
                             + "/drivers/eject.exe",
                             QStringList (),
                             QApplication::applicationDirPath ());
#endif // Q_OS_WIN

#ifdef Q_OS_UNIX
    QProcess::startDetached ("eject /dev/sr0");
    QProcess::startDetached ("eject /dev/sr1");
    QProcess::startDetached ("eject /dev/sr2");
    QProcess::startDetached ("eject /dev/sr3");
    QProcess::startDetached ("eject /dev/sr4");
    QProcess::startDetached ("modprobe usbserial vendor=0x22f4 product=0x0026");
#endif // Q_OS_UNIX


    QTimer::singleShot (SPLASH_SCREEN_TIMEOUT,
                        &splash,
                        SLOT(close()));

    QTimer::singleShot (SPLASH_SCREEN_TIMEOUT,
                        &mainWindow,
                        SLOT(show()));

    return (application.exec());
}
