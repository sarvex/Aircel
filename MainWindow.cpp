#include "MainWindow.h"

#include "DeamonConnection.h"
#include "DeamonDatabase.h"
#include "DeamonInterface.h"
#include "ExitDialog.h"
#include "IncomingDialog.h"
#include "ContactSelectDialog.h"

#include <QAction>
#include <QApplication>
#include <QDesktopServices>
#include <QDesktopWidget>
#include <QDir>
#include <QMenu>
#include <QMessageBox>
#include <QMouseEvent>
#include <QPainter>
#include <QProcess>
#include <QSystemTrayIcon>
#include <QToolTip>
#include <QUrl>

MainWindow::MainWindow (
        QWidget *parent)
    : QMainWindow(parent)
{

    this->initialize ();

    this->createSystemTray ();
    this->createBackground ();
    this->createDisplay ();
    this->createStatusBar ();

    this->connect ();

    DeamonInterface::getInstance ()->start ();
}

MainWindow::~MainWindow()
{

    if (NULL != this->trayIcon)
    {
        delete this->trayIcon;
        this->trayIcon = NULL;
    }

    if (NULL != this->trayIconMenu)
    {
        delete this->trayIconMenu;
        this->trayIconMenu = NULL;
    }
}

void
MainWindow::closeEvent (
        QCloseEvent * event)
{

    if (true == this->close ())
    {

        event->accept ();

    }
    else
    {

        event->ignore ();
    }
}

/// Overload Protected
void
MainWindow::setVisible(
        bool visible)
{

    this->minimizeAction->setEnabled(visible);
    this->restoreAction->setEnabled(isMaximized() || !visible);

    QMainWindow::setVisible(visible);
}

void
MainWindow::paintEvent(
        QPaintEvent* event)
{
    Q_UNUSED (event)

    QPainter painter(this);
    painter.drawImage (QPoint(0,0), *this->background);

    QMainWindow::paintEvent (event);
}

void
MainWindow::mouseMoveEvent(
        QMouseEvent *event)
{

    if (this->moving)
    {

        this->move(event->globalPos() - this->mouseOffset);
    }

    QMainWindow::mouseMoveEvent (event);
}

void
MainWindow::mousePressEvent(
        QMouseEvent *event)
{

    if (event->button() == Qt::LeftButton)
    {

        this->moving = true;
        this->mouseOffset = event->pos();
    }

    QMainWindow::mousePressEvent (event);
}

void
MainWindow::mouseReleaseEvent(
        QMouseEvent *event)
{

    if (event->button() == Qt::LeftButton)
    {

        this->moving = false;
    }

    QMainWindow::mouseReleaseEvent (event);
}

bool
MainWindow::initialize ()
{

    this->setMouseTracking (false);

    this->moving = false;
    this->connected = false;
    this->plugged = false;
    this->mode << "EDGE " << "EDGE " << "3G ";

    return (true);
}

bool
MainWindow::createBackground ()
{

    this->background = new QImage(":/background.png");

    this->minimizeButton = new ImageButton ("",
                                            ":/minimizeDefault.png",
                                            ":/minimizeHover.png",
                                            false, this);
    this->minimizeButton->setGeometry (700, 0, 25, 25);
    this->minimizeButton->setToolTip ("Minimize Application");

    this->closeButton = new ImageButton ("",
                                         ":/closeDefault.png",
                                         ":/closeHover.png",
                                         false, this);
    this->closeButton->setGeometry (725, 0, 25, 25);
    this->closeButton->setToolTip ("Close Application");

    QObject::connect (this->minimizeButton,
                      SIGNAL(clicked()),
                      this,
                      SLOT(onMinimizeButtonClicked()));

    QObject::connect (this->closeButton,
                      SIGNAL(clicked()),
                      this,
                      SLOT(onCloseButtonClicked()));

    return (true);
}

bool
MainWindow::createDisplay ()
{

    this->display = new QStackedWidget (this);
    this->display->setGeometry (5, 130, 740, 395);

    this->home = new HomeWidget(this->display);
    this->display->addWidget (this->home);

    this->message = new MessageWidget(this->display);
    this->display->addWidget (this->message);

    this->phonebook = new ContactWidget(this->display);
    this->display->addWidget (this->phonebook);

    this->setting = new SettingWidget(this->display);
    this->display->addWidget (this->setting);


    this->homeButton = new ImageButton ("Home",
                                        ":/buttonDefault.png",
                                        ":/buttonHover.png",
                                        ":/buttonPress.png",
                                        false, this);
    this->homeButton->setGeometry (5, 91, 78, 34);
    this->homeButton->setToolTip ("Home Screen");

    this->messageButton = new ImageButton ("Messages",
                                           ":/buttonDefault.png",
                                           ":/buttonHover.png",
                                           ":/buttonPress.png",
                                           false, this);
    this->messageButton->setGeometry (83, 91, 78, 34);
    this->messageButton->setToolTip ("Messages");

    this->phonebookButton = new ImageButton ("Phonebook",
                                             ":/buttonDefault.png",
                                             ":/buttonHover.png",
                                             ":/buttonPress.png",
                                             false, this);
    this->phonebookButton->setGeometry (161, 91, 78, 34);
    this->phonebookButton->setToolTip ("Phonebook");

    this->gamesButton = new ImageButton ("Games",
                                         ":/buttonDefault.png",
                                         ":/buttonHover.png",
                                         ":/buttonPress.png",
                                         false, this);
    this->gamesButton->setGeometry (239, 91, 78, 34);
    this->gamesButton->setToolTip ("Games");

    this->musicButton = new ImageButton ("Music",
                                         ":/buttonDefault.png",
                                         ":/buttonHover.png",
                                         ":/buttonPress.png",
                                         false, this);
    this->musicButton->setGeometry (317, 91, 78, 34);
    this->musicButton->setToolTip ("Music");

    this->settingButton = new ImageButton ("Settings",
                                           ":/buttonDefault.png",
                                           ":/buttonHover.png",
                                           ":/buttonPress.png",
                                           false, this);
    this->settingButton->setGeometry (395, 91, 78, 34);
    this->settingButton->setToolTip ("Settings");



    this->timeLabel = new TimeLabel(this);
    this->timeLabel->setGeometry (510, 100, 191, 34);
    this->timeLabel->setVisible (false);

    this->sessionLabel = new AnimateButton (":/session1.png",
                                            ":/session2.png",
                                            ":/session3.png",
                                            ":/session4.png",
                                            ":/session5.png",
                                            ":/session6.png", this);
    this->sessionLabel->setGeometry (716, 97, 24, 24);
    this->sessionLabel->setVisible (false);


    QObject::connect (this->homeButton,
                      SIGNAL(clicked()),
                      this,
                      SLOT(onHomeButtonClicked()));

    QObject::connect (this->messageButton,
                      SIGNAL(clicked()),
                      this,
                      SLOT(onMessageButtonClicked()));

    QObject::connect (this->phonebookButton,
                      SIGNAL(clicked()),
                      this,
                      SLOT(onPhonebookButtonClicked()));

    QObject::connect (this->gamesButton,
                      SIGNAL(clicked()),
                      this,
                      SLOT(onGamesButtonClicked()));

    QObject::connect (this->musicButton,
                      SIGNAL(clicked()),
                      this,
                      SLOT(onMusicButtonClicked()));

    QObject::connect (this->settingButton,
                      SIGNAL(clicked()),
                      this,
                      SLOT(onSettingButtonClicked()));


    this->homeButton->click ();

    return (true);
}

bool
MainWindow::onHomeButtonClicked ()
{

    this->resetTabs ();

    if (HOME_TAB == this->activeTab)
    {

        this->activeTab = NONE;
        this->homeButton->setSelect(false);

    }
    else
    {

        this->activeTab = HOME_TAB;
        this->homeButton->setSelect(true);
    }

    this->display->setCurrentIndex (0);

    return(true);
}

bool
MainWindow::onMessageButtonClicked ()
{

    this->resetTabs ();

    if (MESSAGE_TAB == this->activeTab)
    {

        this->activeTab = NONE;
        this->messageButton->setSelect(false);

    }
    else
    {

        this->activeTab = MESSAGE_TAB;
        this->messageButton->setSelect(true);
    }

    this->display->setCurrentIndex (1);
    return(true);
}

bool
MainWindow::onPhonebookButtonClicked ()
{

    this->resetTabs ();

    if (PHONEBOOK_TAB == this->activeTab)
    {

        this->activeTab = NONE;
        this->phonebookButton->setSelect(false);

    }
    else
    {

        this->activeTab = PHONEBOOK_TAB;
        this->phonebookButton->setSelect(true);
    }

    this->display->setCurrentIndex (2);
    return(true);
}

bool
MainWindow::onGamesButtonClicked ()
{

    this->resetTabs ();

    if (GAMES_TAB == this->activeTab)
    {

        this->activeTab = NONE;
        this->gamesButton->setSelect(false);

    }
    else
    {

        this->activeTab = GAMES_TAB;
        this->gamesButton->setSelect(true);
        this->onOpenWebPage (GAMES_URL);

    }

    this->display->setCurrentIndex (0);
    return(true);
}

bool
MainWindow::onMusicButtonClicked ()
{

    this->resetTabs ();

    if (MUSIC_TAB == this->activeTab)
    {

        this->activeTab = NONE;
        this->musicButton->setSelect(false);

    }
    else
    {

        this->activeTab = MUSIC_TAB;
        this->musicButton->setSelect(true);
        this->onOpenWebPage (MUSIC_URL);
    }

    this->display->setCurrentIndex (0);
    return(true);
}

bool
MainWindow::onSettingButtonClicked ()
{

    this->resetTabs ();

    if (SETTING_TAB == this->activeTab)
    {

        this->activeTab = NONE;
        this->settingButton->setSelect(false);

    }
    else
    {

        this->activeTab = SETTING_TAB;
        this->settingButton->setSelect(true);
    }

    this->display->setCurrentIndex (3);
    return(true);
}

bool
MainWindow::createStatusBar ()
{

    this->networkDisplayMode = new QLabel(this);
    this->networkDisplayMode->setGeometry (40, 534, 344, 12);
    this->networkDisplayMode->setProperty ("class", "networkDisplayMode");
    this->networkDisplayMode->setToolTip ("Network Mode");

    this->speedLabel = new SpeedLabel(this);
    this->speedLabel->setGeometry (190, 534, 344, 12);
    this->speedLabel->setToolTip ("Data Speed");

    this->signalStrengthLabel = new QLabel (this);
    this->signalStrengthLabel->setGeometry (5, 530, 50, 20);
    this->signalStrengthLabel->setToolTip ("Signal Strength");

    this->signalStrengthImage << QPixmap(":/rssi0.png");
    this->signalStrengthImage << QPixmap(":/rssi1.png");
    this->signalStrengthImage << QPixmap(":/rssi2.png");
    this->signalStrengthImage << QPixmap(":/rssi3.png");
    this->signalStrengthImage << QPixmap(":/rssi4.png");
    this->signalStrengthImage << QPixmap(":/rssi5.png");


    this->dataConnectionLabel = new QLabel (this);
    this->dataConnectionLabel->setGeometry (170, 531, 22, 16);
    this->dataConnectionLabel->setToolTip ("Connection Status");

    this->dataConnectionImage << QPixmap (":/noDataConnection.png");
    this->dataConnectionImage << QPixmap (":/dataConnected.png");

    this->messageAnnunciator = new AnimateButton(":/newMessageFooter.png",
                                                 ":/newMessageFooter.png",
                                                 ":/newMessageFooter.png",
                                                 ":/newMessageDisableFooter.png",
                                                 ":/newMessageDisableFooter.png",
                                                 ":/newMessageDisableFooter.png",
                                                 this);
    this->messageAnnunciator->setGeometry (540, 531, 22, 16);
    this->messageAnnunciator->setVisible (false);
    this->messageAnnunciator->setToolTip ("Unread Message Available");

    QObject::connect (this->messageAnnunciator,
                      SIGNAL(clicked()),
                      this,
                      SLOT(onMessageAnnunciatorClicked()));

    this->signalStrengthLabel->setPixmap (this->signalStrengthImage.at (0));
    this->dataConnectionLabel->setPixmap (this->dataConnectionImage.at (0));

    return (true);
}

bool
MainWindow::onMessageAnnunciator (
        bool visible)
{

    this->messageAnnunciator->setVisible (visible);

    return (true);
}

bool
MainWindow::onMessageAnnunciatorClicked ()
{

    emit this->selectUnread ();
    this->messageButton->click ();

    return (true);
}

bool
MainWindow::connect ()
{

    QObject::connect (this->message,
                      SIGNAL(save (QString)),
                      this,
                      SLOT(onSave (QString)));

    QObject::connect (this->message,
                      SIGNAL (number (QString)),
                      this->phonebook,
                      SLOT (number (QString)));

    QObject::connect (this->message,
                      SIGNAL (messageAnnunciator(bool)),
                      this,
                      SLOT (onMessageAnnunciator (bool)));

    message->updateTree ();

    QObject::connect (this->message,
                      SIGNAL(readContactUpdate(bool)),
                      this->phonebook,
                      SLOT(onReadContactUpdate(bool)));

    QObject::connect (this,
                      SIGNAL(selectUnread()),
                      this->message,
                      SLOT(onSelectUnread()));
    QObject::connect (this->phonebook,
                      SIGNAL(send (QString, QString)),
                      this,
                      SLOT(onSend (QString, QString)));

    QObject::connect (this->phonebook,
                      SIGNAL(name (QString, QString)),
                      this->message,
                      SLOT(name (QString, QString)));

    QObject::connect (this->setting,
                      SIGNAL (resetNetwork ()),
                      this,
                      SLOT (onResetNetwork ()));

    QObject::connect (this->setting,
                      SIGNAL(resetNetwork()),
                      this->home,
                      SLOT(onResetNetwork ()));
    QObject::connect (DeamonInterface::getInstance (),
                      SIGNAL(modemPlugged (bool)),
                      this,
                      SLOT(onModemPlugged (bool)));

    QObject::connect (DeamonInterface::getInstance (),
                      SIGNAL(signalStrengthUpdate(const QString&)),
                      this,
                      SLOT(onSignalStrengthUpdate(const QString&)));

    QObject::connect (DeamonInterface::getInstance (),
                      SIGNAL(messageRecievedUpdate(Message)),
                      this,
                      SLOT(onMessageRecievedUpdate(Message)));

    QObject::connect (DeamonInterface::getInstance (),
                      SIGNAL(networkDisplayModeUpdate (
                                 const QString&, const QString&)),
                      this,
                      SLOT(onNetworkDisplayModeUpdate(
                               const QString&, const QString&)));

    QObject::connect (DeamonInterface::getInstance (),
                      SIGNAL(deliveryReportUpdate(Message)),
                      this,
                      SLOT(onDeliveryReportUpdate(Message)));

    QObject::connect (DeamonConnection::getInstance (),
                      SIGNAL(modemConnected (bool)),
                      this,
                      SLOT(onModemConnected (bool)));



    QObject::connect (DeamonConnection::getInstance (),
                      SIGNAL(rasError(int, QString)),
                      this,
                      SLOT(onRasError(int, QString)));

    return (true);
}

bool
MainWindow::onApplicationMessageAvailable (
        QString message)
{

    Q_UNUSED (message);

    this->showNormal ();

    return (true);
}

bool
MainWindow::onMessageRecievedUpdate (
        Message message)
{
    Q_UNUSED (message);

    IncomingDialog incoming(NEW_MESSAGE, NEW_MESSAGE_VIEW);

    if (QDialog::Accepted == incoming.exec ())
    {

        emit this->selectUnread ();
        this->showNormal ();
        this->messageButton->click ();
    }

    return (true);
}

bool
MainWindow::onDeliveryReportUpdate(
        Message message)
{
    Q_UNUSED (message);


    IncomingDialog incoming(NEW_REPORT, NEW_REPORT_VIEW);

    if (QDialog::Accepted == incoming.exec ())
    {

        emit this->selectUnread ();

        this->showNormal ();
        this->messageButton->click ();
    }

    return (true);
}

bool
MainWindow::createSystemTray ()
{

    this->minimizeAction = new QAction("Mi&nimize", this);
    this->restoreAction = new QAction("&Restore", this);


    this->upgradeAction = new QAction(tr("&Upgrade"), this);

    this->quitAction = new QAction(tr("&Quit"), this);

    this->trayIconMenu = new QMenu(this);

    this->trayIconMenu->addAction(this->minimizeAction);
    this->trayIconMenu->addAction(this->restoreAction);
    this->trayIconMenu->addSeparator ();

    this->trayIconMenu->addAction(this->upgradeAction);
    this->trayIconMenu->addSeparator();

    this->trayIconMenu->addAction(this->quitAction);

    this->trayIcon = new QSystemTrayIcon(this);
    this->trayIcon->setContextMenu(this->trayIconMenu);
    this->trayIcon->setToolTip(APPLICATION_NAME);

    this->trayIcon->setIcon(QIcon(":/tray.png"));
    this->trayIcon->show();

    QObject::connect (this->minimizeAction,
                      SIGNAL(triggered()),
                      this,
                      SLOT(hide()));

    QObject::connect (this->restoreAction,
                      SIGNAL(triggered()),
                      this,
                      SLOT(showNormal()));


    QObject::connect (this->upgradeAction,
                      SIGNAL(triggered()),
                      this,
                      SLOT(onUpgradeTriggered()));

    QObject::connect (this->quitAction,
                      SIGNAL(triggered()),
                      this,
                      SLOT(onQuitTriggered()));

    QObject::connect(this->trayIcon,
                     SIGNAL(activated (
                                QSystemTrayIcon::ActivationReason)),
                     this,
                     SLOT(onSystemTrayActivated (
                              QSystemTrayIcon::ActivationReason)));

    return(true);
}

bool
MainWindow::onSystemTrayActivated(
        QSystemTrayIcon::ActivationReason reason)
{

    switch (reason)
    {

        case QSystemTrayIcon::Trigger: {
        }break;

        case QSystemTrayIcon::DoubleClick: {
            this->showNormal();
        }break;

        case QSystemTrayIcon::MiddleClick: {
        }break;

        case QSystemTrayIcon::Unknown: {
        }break;

        case QSystemTrayIcon::Context: {
        }break;
    }

    return (true);
}

bool
MainWindow::close ()
{
    if (true == this->connected)
    {

        if ( QMessageBox::Ok ==
             QMessageBox::information (NULL,
                                       CLOSE_TITLE,
                                       CLOSE_MESSAGE,
                                       QMessageBox::Ok|QMessageBox::Cancel,
                                       QMessageBox::Cancel))
        {

            DeamonConnection::getInstance ()->disconnectDataCall ();

        }
        else
        {

            return (false);
        }
    }

    ExitDialog dialogExit;

    if (QDialog::Accepted == dialogExit.exec())
    {

        DeamonConnection::getInstance ()->removeConnectionEntry ();
        DeamonDatabase::getInstance ()->closeDatabase ();

        DeamonInterface::getInstance ()->stop ();
        DeamonInterface::getInstance ()->wait ();

        qApp->quit();
    }

    return (true);
}

bool
MainWindow::onCloseButtonClicked ()
{

    return (this->close ());
}

bool
MainWindow::onMinimizeButtonClicked ()
{

    this->hide();

    return (true);
}

bool
MainWindow::onModemPlugged (bool status)
{

    if (false == status)
    {

        this->signalStrengthLabel->setPixmap (this->signalStrengthImage.at (0));
        this->dataConnectionLabel->setPixmap (this->dataConnectionImage.at (0));

        this->networkDisplayMode->setText ("");

        QMessageBox::information (NULL,
                                  "Aircel",
                                  "The Device has been Disconnected or Unavailable",
                                  QMessageBox::Ok, QMessageBox::Ok);
    }

    return (true);
}

bool
MainWindow::onSave (
        QString number)
{

    this->phonebookButton->click ();

    this->phonebook->save (number);

    return (true);
}

bool
MainWindow::onSend (
        QString number,
        QString content)
{

    this->messageButton->click ();

    this->message->send (number, content);

    return(true);
}

bool
MainWindow::resetTabs ()
{

    this->homeButton->setSelect (false);
    this->messageButton->setSelect (false);
    this->phonebookButton->setSelect (false);
    this->gamesButton->setSelect (false);
    this->musicButton->setSelect (false);
    this->settingButton->setSelect (false);

    return (true);
}

bool
MainWindow::onOpenWebPage (
        QString url)
{

    QDesktopServices::openUrl(QUrl(url));

    return(true);
}

bool
MainWindow::onSignalStrengthUpdate (
        QString value)
{

    QString data = value.simplified ();

    int signal = data.remove ("dbm").remove ("-").toInt ();
    int bars = 0;

    if (signal < 60)
    {

        bars = 5;

    }
    else if (signal < 70)
    {

        bars = 4;

    }
    else if (signal < 80)
    {

        bars = 3;

    }
    else if (signal < 90)
    {

        bars = 2;

    }
    else if (signal < 125)
    {

        bars = 1;
    }

    this->signalStrengthLabel->setPixmap(signalStrengthImage.at(bars));

    this->home->onSignalStrengthUpdate (bars);

    return(true);
}

bool
MainWindow::onNetworkDisplayModeUpdate (
        QString value,
        QString networkName )
{

    this->networkDisplayMode->setText (this->mode.at (value.toInt ())
                                       + networkName);

    return (true);
}

bool
MainWindow::onQuitTriggered ()
{

    if (true == this->connected)
    {
        if ( QMessageBox::Ok ==
             QMessageBox::information (NULL,
                                       CLOSE_TITLE,
                                       CLOSE_MESSAGE,
                                       QMessageBox::Ok|QMessageBox::Cancel,
                                       QMessageBox::Cancel))
        {

            DeamonConnection::getInstance ()->disconnectDataCall ();

        }
        else
        {

            return (false);
        }
    }

    qApp->quit ();
    return (true);
}

bool
MainWindow::onUpgradeTriggered ()
{
    QFile (QDir::tempPath () + "/setup.exe");

    this->setupRequest = new QHttp (this);
    QObject::connect (this->setupRequest,
                      SIGNAL(requestFinished(int, bool)),
                      this,
                      SLOT(onSetupRequestFinished(int, bool)));

    this->setupData = new QByteArray(128000, 0);
    this->setupBuffer = new QBuffer (this->setupData, 0);
    this->setupBuffer->open (QIODevice::ReadWrite|QIODevice::Truncate);

    this->setupRequest->setHost (QUrl(SETUP_URL).host ());
    this->setupRequestIndex = this->setupRequest->get (
                                  QUrl (SETUP_URL).toEncoded (),
                                  this->setupBuffer);

    this->upgradeAction->setText ("Downloading...");
    this->upgradeAction->setEnabled (false);
    return (true);
}

bool MainWindow::checkVersion ()
{

    this->versionRequest = new QHttp (this);
    QObject::connect (this->versionRequest,
                      SIGNAL(requestFinished(int, bool)),
                      this,
                      SLOT(onVersionRequestFinished(int, bool)));

    this->versionData = new QByteArray(128, 0);
    this->versionBuffer = new QBuffer (this->versionData, 0);
    this->versionBuffer->open (QIODevice::ReadWrite|QIODevice::Truncate);

    this->versionRequest->setHost (QUrl(VERSION_URL).host ());
    this->versionRequestIndex = this->versionRequest->get (
                                    QUrl(VERSION_URL).toEncoded (),
                                    this->versionBuffer);

    return (true);
}

bool
MainWindow::onVersionRequestFinished (
        int index, bool failed)
{

    if (index != this->versionRequestIndex)
    {

        return (false);
    }

    bool result = false;

    if ( true == failed )
    {

        result = false;

    }
    else
    {
        QString version(*this->versionData);
        QString current(VERSION);

        if (version.toInt () > current.toInt ())
        {
            this->trayIcon->showMessage (NEW_VERSION,
                                         VERSION_SUCCESS);
            this->upgradeAction->setEnabled (true);

        }
        else
        {
            QMessageBox::information (NULL,
                                      NETWORK_SUCCESS,
                                      VERSION_LATEST,
                                      QMessageBox::Ok,
                                      QMessageBox::Ok);
            result = true;
        }
    }

    this->versionBuffer->close ();

    if (NULL != this->versionBuffer)
    {
        delete this->versionBuffer;
        this->versionBuffer = NULL;
    }

    if (NULL != this->versionData)
    {
        delete this->versionData;
        this->versionData = NULL;
    }

    return (result);
}

bool
MainWindow::onSetupRequestFinished (
        int index, bool failed)
{

    bool result = false;

    if (index != this->setupRequestIndex)
    {

        return (false);
    }

    if ( true == failed )
    {
        QMessageBox::critical (NULL,
                               NETWORK_ERROR,
                               SETUP_ERROR,
                               QMessageBox::Ok,
                               QMessageBox::Ok);

        result = false;

    }
    else
    {
        QFile setupFile (QDir::tempPath () + "/setup.exe");
        setupFile.open (QIODevice::WriteOnly | QIODevice::Truncate);
        setupFile.write (*this->setupData);
        setupFile.close ();

        if (QMessageBox::Ok == QMessageBox::question (NULL,
                                                      NETWORK_SUCCESS,
                                                      SETUP_SUCCESS,
                                                      QMessageBox::Ok |
                                                      QMessageBox::Cancel,
                                                      QMessageBox::Ok))
        {
#ifdef Q_OS_WIN
            QString setupFileName(QDir::tempPath ()+"/setup.exe");

            int result = (int)
                         ::ShellExecuteA(0,
                                         "open",
                                         setupFileName.toUtf8 ().constData (),
                                         0,
                                         0,
                                         SW_SHOWNORMAL);
#endif // Q_OS_WIN
            result = true;
        }

    }

    this->setupBuffer->close ();

    if (NULL != this->setupBuffer)
    {
        delete this->setupBuffer;
        this->setupBuffer = NULL;
    }

    if (NULL != this->setupData)
    {
        delete this->setupData;
        this->setupData = NULL;
    }

    if (true == result)
    {
        qApp->quit();
    }

    return (result);
}

bool MainWindow::onModemConnected (bool status)
{

    this->dataConnectionLabel->setPixmap (
                this->dataConnectionImage.at (status?1:0));

    this->connected = status;
    this->sessionLabel->setVisible (status);

    if (true == status)
    {

        QDesktopServices::openUrl(QUrl(DEFAULT_URL));
    }

    return (true);
}

bool MainWindow::onRasError(int errorNumber, QString errorString)
{

    QMessageBox::critical(NULL,
                          QString::number (errorNumber),
                          errorString,
                          QMessageBox::Ok,
                          QMessageBox::Ok);
    return (true);
}

bool
MainWindow::onResetNetwork()
{

    this->signalStrengthLabel->setPixmap (this->signalStrengthImage.at (0));
    this->networkDisplayMode->setText ("");

    return (true);
}
