#include "At.h"
#include "DeamonConnection.h"
#include "DeamonInterface.h"
#include "Define.h"
#include "SimUsimWidget.h"

#include <QDebug>

SimUsimWidget::SimUsimWidget (
        QWidget *parent)
    : QWidget(parent)
{

    this->ownNumber = new QLineEdit;
    this->ownNumber->setPlaceholderText (tr("Updating..."));
    this->ownNumber->setReadOnly (true);

    this->contactSim = new QLineEdit;
    this->contactSim->setPlaceholderText (tr("Updating..."));
    this->contactSim->setReadOnly (true);

    this->messageCenterNumber = new QLineEdit;
    this->messageCenterNumber->setPlaceholderText (tr("Updating..."));
    this->messageCenterNumber->setReadOnly (true);

    this->pinCode = new QLineEdit;
    this->pinCode->setPlaceholderText (tr("Updating..."));
    this->pinCode->setReadOnly (true);

    this->layout = new QFormLayout;
    this->layout->setLabelAlignment (Qt::AlignRight);
    this->layout->addRow (tr("Own number(MSISDN)"), this->ownNumber);
    this->layout->addRow (tr("Contacts in SIM/USIM"), this->contactSim);
    this->layout->addRow (tr("Message Center Number"), this->messageCenterNumber);
    this->layout->addRow (tr("Pin Code Status"), this->pinCode);

    this->setLayout (this->layout);

    QObject::connect (DeamonInterface::getInstance (),
                      SIGNAL(ownNumberUpdate (QString)),
                      this,
                      SLOT(onOwnNumberUpdate(QString)));

    QObject::connect (DeamonInterface::getInstance (),
                      SIGNAL(contactCountUpdate(QString, QString)),
                      this,
                      SLOT(onContactCountUpdate(QString, QString)));

    QObject::connect (DeamonInterface::getInstance (),
                      SIGNAL(messageCenterNumberUpdate(QString)),
                      this,
                      SLOT(onMessageCenterNumberUpdate(QString)));

    QObject::connect (DeamonInterface::getInstance (),
                      SIGNAL(pinCodeStatusUpdate(QString)),
                      this,
                      SLOT(onPinCodeUpdate(QString)));

    QObject::connect (DeamonInterface::getInstance (),
                      SIGNAL(modemPlugged (bool)),
                      this,
                      SLOT(onModemPlugged (bool)));

    QObject::connect (DeamonConnection::getInstance (),
                      SIGNAL(modemConnected (bool)),
                      this,
                      SLOT(onModemConnected (bool)));
}

void
SimUsimWidget::showEvent (
        QShowEvent * event)
{

    DeamonInterface::getInstance ()->write (At::messageCenterNumber);
    DeamonInterface::getInstance ()->write (At::contactCount);
    DeamonInterface::getInstance ()->write (At::pinCodeStatus);
    DeamonInterface::getInstance ()->write (At::ownNumber);

    QTimer::singleShot (10000, this, SLOT(onTimer ()));

    QWidget::showEvent (event);
}

bool
SimUsimWidget::onTimer ()
{
    if (true == this->ownNumber->text ().isEmpty ())
    {
        this->ownNumber->setText ("Unknown");
    }

    if (true == this->pinCode->text ().isEmpty ())
    {
        this->pinCode->setText ("Unknown");
    }

    if (true == this->contactSim->text ().isEmpty ())
    {
        this->contactSim->setText ("Unknown");
    }

    if (true == this->messageCenterNumber->text ().isEmpty ())
    {
        this->messageCenterNumber->setText ("Unknown");
    }

    return (true);
}

bool
SimUsimWidget::onOwnNumberUpdate (
        QString value)
{


    this->ownNumber->setText (value);

    return (true);
}

bool
SimUsimWidget::onContactCountUpdate (
        QString total,
        QString capacity)
{

    this->contactSim->setText (total + SLASH + capacity);

    return (true);
}

bool
SimUsimWidget::onMessageCenterNumberUpdate (
        QString value)
{

    this->messageCenterNumber->setText (value);

    return (true);
}

bool
SimUsimWidget::onPinCodeUpdate (
        QString value)
{

    this->pinCode->setText (value);

    return (true);
}

bool
SimUsimWidget::onModemPlugged (
        bool status)
{

    if (false == status)
    {
        this->ownNumber->setText ("Unknown");
        this->pinCode->setText ("Unknown");
        this->contactSim->setText ("Unknown");
        this->messageCenterNumber->setText ("Unknown");
    }

    return (true);
}

bool
SimUsimWidget::onModemConnected (
        bool status)
{
    Q_UNUSED (status);

    return (true);
}

QString
SimUsimWidget::readAll ()
{

    return (QString (tr("Own number(MSISDN) : ") + this->ownNumber->text ()
                     + NEW_LINE_CARRIAGE +

                     tr("Contacts in SIM/USIM : ") + this->contactSim->text ()
                     + NEW_LINE_CARRIAGE +

                     tr("Message Center Number : ") + this->messageCenterNumber->text ()
                     + NEW_LINE_CARRIAGE +

                     tr("Pin Code Status : ") + this->pinCode->text ()
                     + NEW_LINE_CARRIAGE + NEW_LINE_CARRIAGE));
}

bool
SimUsimWidget::clear ()
{
    this->ownNumber->clear ();

    this->contactSim->clear ();

    this->messageCenterNumber->clear ();
    this->pinCode->clear ();

    return (true);
}
