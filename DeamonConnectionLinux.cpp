#include "Data.h"
#include "DeamonConnection.h"
#include "DeamonDatabase.h"
#include "DeamonSetting.h"
#include "Define.h"

#include <QDateTime>
#include <QDebug>

DeamonConnection* DeamonConnection::singleton = NULL;

DeamonConnection*
DeamonConnection::getInstance ()
{

    if (NULL == singleton)
    {

        singleton = new DeamonConnection();
    }

    return(singleton);
}

DeamonConnection::DeamonConnection(
        QObject * parent) :
    QObject(parent),

    bytesTransmitted (0.0),
    bytesRecieved (0.0),

    transmitOffset (0.0),
    recieveOffset (0.0),

    duration (0.0),
    durationOffset (0.0)
{

    this->timer = new QTimer;

    QObject::connect (this->timer,
                      SIGNAL(timeout()),
                      this,
                      SLOT(onTimer()));

    QObject::connect (this,
                      SIGNAL(modemConnected (bool)),
                      this,
                      SLOT (onModemConnected (bool)));
}

QString
DeamonConnection::getModemName ()
{

    return "";
}

bool
DeamonConnection::connectDataCall ()
{

    return true;
}

bool
DeamonConnection::disconnectDataCall ()
{

    return true;
}

bool
DeamonConnection::createConnectionEntry ()
{

    return true;
}


bool
DeamonConnection::removeConnectionEntry ()
{

    return true;
}

bool
DeamonConnection::onResetUsage ()
{

    return true;
}

bool
DeamonConnection::onTimer ()
{

    return true;
}

bool
DeamonConnection::onModemConnected (bool status)
{

    return status;
}
