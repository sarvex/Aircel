#include "At.h"
#include "DeamonInterface.h"
#include "DeamonSetting.h"
#include "DeamonDatabase.h"
#include "Define.h"

DeamonSetting*
DeamonSetting::singleton = NULL;

const Setting
DeamonSetting::defaultDeliveryReport = Setting ("", false);

DeamonSetting*
DeamonSetting::getInstance ()
{

    if (NULL == singleton)
    {

        singleton = new DeamonSetting();
    }

    return(singleton);
}

DeamonSetting::DeamonSetting (
        QObject * parent)
    : QObject(parent)
{

    QList <Setting> setting = DeamonDatabase::getInstance()->readSetting ();

    if ( setting.isEmpty ())
    {

        this->deliveryReport = DeamonSetting::defaultDeliveryReport;

        DeamonDatabase::getInstance ()->addSetting (
                    DeamonSetting::defaultDeliveryReport);

    }
    else
    {

        this->deliveryReport = setting.at (0);
    }

    this->fireDeliveryReport ();
}

bool
DeamonSetting::setDeliveryReport(
        bool deliveryReport)
{

    this->deliveryReport.setEnable (deliveryReport);
    this->fireDeliveryReport ();

    DeamonDatabase::getInstance ()->editSetting (this->deliveryReport);

    return (true);
}

bool
DeamonSetting::fireDeliveryReport ()
{

    if ( true == deliveryReport.getEnable ())
    {

        DeamonInterface::getInstance ()->write (
                    At::enableDeliveryAcknowledgement);

    }
    else
    {

        DeamonInterface::getInstance ()->write (
                    At::disableDeliveryAcknowledgement);
    }

    return (true);
}

bool
DeamonSetting::getDeliveryReport() const
{

    return (this->deliveryReport.getEnable ());
}
