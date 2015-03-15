#ifndef DEAMON_SETTING
#define DEAMON_SETTING

#include "Setting.h"

#include <QObject>
#include <QString>

class DeamonSetting : public QObject
{
    Q_OBJECT
public:
    static DeamonSetting* getInstance ();

    bool getDeliveryReport () const;
    bool setDeliveryReport (bool deliveryReport);

signals:

public slots:

protected:

private:
    explicit DeamonSetting(QObject *parent = 0);
    static DeamonSetting* singleton;

    bool fireDeliveryReport ();

    Setting deliveryReport;

    const static Setting defaultDeliveryReport;
};

#endif // DEAMON_SETTING
