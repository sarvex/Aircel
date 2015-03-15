#ifndef SETTING_WIDGET
#define SETTING_WIDGET

#include "DataWidget.h"
#include "CheckBalanceWidget.h"
#include "MessageSettingWidget.h"
#include "NetworkWidget.h"
#include "OperatorWidget.h"
#include "PinWidget.h"
#include "PocketWidget.h"
#include "UserManualWidget.h"

#include <QListWidget>
#include <QSplitter>
#include <QStackedWidget>
#include <QString>
#include <QVBoxLayout>
#include <QWidget>

class SettingWidget
        : public QWidget
{
    Q_OBJECT

public:
    explicit SettingWidget (QWidget *parent = 0);

signals:

    bool resetNetwork ();

public slots:

protected:

private:
    DataWidget * dataWidget;
    CheckBalanceWidget * checkBalanceWidget;
    MessageSettingWidget * messageSettingWidget;
    NetworkWidget * networkWidget;
    OperatorWidget * operatorWidget;
    PinWidget * pinWidget;
    PocketWidget * pocketWidget;
    UserManualWidget * userManualWidget;

    QListWidget * list;
    QStackedWidget * content;

    QSplitter * splitter;
    QVBoxLayout * layout;
};

#endif // SETTING_WIDGET
