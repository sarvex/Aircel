#include <QtGui/QApplication>
#include "MainWindow.h"

#include <QDir>
#include <QFile>
#include <QTextStream>

void
myMessageHandler (
                 QtMsgType type,
                 const char * message)
{

    QFile outFile(QDir::tempPath () + SLASH + LOG_FILE_NAME);
    outFile.open(QIODevice::WriteOnly | QIODevice::Append);

    QTextStream file(&outFile);
    QTextStream stde(stderr);

    file << "<" << type << "> " << QString (message) << endl;
    stde << "<" << type << "> " << QString (message) << endl;
}


int
main(
    int argc, char *argv[])
{

    qInstallMsgHandler(myMessageHandler);

    QApplication application(argc, argv);
    MainWindow mainWindow;

    Q_UNUSED (application);
    Q_UNUSED (mainWindow);

    return (0);
}
