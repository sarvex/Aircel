/****************************************************************************
** Meta object code from reading C++ file 'MainWindow.h'
**
** Created: Wed Feb 8 13:31:07 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../MainWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MainWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      28,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      17,   11,   12,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
      32,   11,   12,   11, 0x0a,
      57,   49,   12,   11, 0x0a,
      84,   11,   12,   11, 0x0a,
     122,  114,   12,   11, 0x0a,
     168,  161,   12,   11, 0x0a,
     238,  225,   12,   11, 0x0a,
     273,  225,   12,   11, 0x0a,
     313,  306,   12,   11, 0x0a,
     344,  329,   12,   11, 0x0a,
     368,   11,   12,   11, 0x0a,
     394,   11,   12,   11, 0x0a,
     417,   11,   12,   11, 0x0a,
     439,   11,   12,   11, 0x0a,
     464,   11,   12,   11, 0x0a,
     491,   11,   12,   11, 0x0a,
     514,   11,   12,   11, 0x0a,
     537,   11,   12,   11, 0x0a,
     566,  562,   12,   11, 0x0a,
     589,  114,   12,   11, 0x0a,
     622,  114,   12,   11, 0x0a,
     661,  654,   12,   11, 0x0a,
     682,  654,   12,   11, 0x0a,
     729,  705,   12,   11, 0x0a,
     771,  753,   12,   11, 0x0a,
     821,  815,   12,   11, 0x0a,
     853,   11,   12,   11, 0x0a,
     874,   11,   12,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0bool\0selectUnread()\0"
    "onResetNetwork()\0visible\0"
    "onMessageAnnunciator(bool)\0"
    "onMessageAnnunciatorClicked()\0message\0"
    "onApplicationMessageAvailable(QString)\0"
    "reason\0onSystemTrayActivated(QSystemTrayIcon::ActivationReason)\0"
    "index,failed\0onVersionRequestFinished(int,bool)\0"
    "onSetupRequestFinished(int,bool)\0"
    "number\0onSave(QString)\0number,content\0"
    "onSend(QString,QString)\0"
    "onMinimizeButtonClicked()\0"
    "onCloseButtonClicked()\0onHomeButtonClicked()\0"
    "onMessageButtonClicked()\0"
    "onPhonebookButtonClicked()\0"
    "onGamesButtonClicked()\0onMusicButtonClicked()\0"
    "onSettingButtonClicked()\0url\0"
    "onOpenWebPage(QString)\0"
    "onMessageRecievedUpdate(Message)\0"
    "onDeliveryReportUpdate(Message)\0status\0"
    "onModemPlugged(bool)\0onModemConnected(bool)\0"
    "errorNumber,errorString\0onRasError(int,QString)\0"
    "value,networkName\0"
    "onNetworkDisplayModeUpdate(QString,QString)\0"
    "value\0onSignalStrengthUpdate(QString)\0"
    "onUpgradeTriggered()\0onQuitTriggered()\0"
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MainWindow *_t = static_cast<MainWindow *>(_o);
        switch (_id) {
        case 0: { bool _r = _t->selectUnread();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 1: { bool _r = _t->onResetNetwork();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 2: { bool _r = _t->onMessageAnnunciator((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: { bool _r = _t->onMessageAnnunciatorClicked();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: { bool _r = _t->onApplicationMessageAvailable((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->onSystemTrayActivated((*reinterpret_cast< QSystemTrayIcon::ActivationReason(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { bool _r = _t->onVersionRequestFinished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: { bool _r = _t->onSetupRequestFinished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: { bool _r = _t->onSave((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: { bool _r = _t->onSend((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: { bool _r = _t->onMinimizeButtonClicked();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: { bool _r = _t->onCloseButtonClicked();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: { bool _r = _t->onHomeButtonClicked();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: { bool _r = _t->onMessageButtonClicked();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: { bool _r = _t->onPhonebookButtonClicked();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 15: { bool _r = _t->onGamesButtonClicked();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 16: { bool _r = _t->onMusicButtonClicked();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 17: { bool _r = _t->onSettingButtonClicked();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 18: { bool _r = _t->onOpenWebPage((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 19: { bool _r = _t->onMessageRecievedUpdate((*reinterpret_cast< Message(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 20: { bool _r = _t->onDeliveryReportUpdate((*reinterpret_cast< Message(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 21: { bool _r = _t->onModemPlugged((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 22: { bool _r = _t->onModemConnected((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 23: { bool _r = _t->onRasError((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 24: { bool _r = _t->onNetworkDisplayModeUpdate((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 25: { bool _r = _t->onSignalStrengthUpdate((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 26: { bool _r = _t->onUpgradeTriggered();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 27: { bool _r = _t->onQuitTriggered();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MainWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 28)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 28;
    }
    return _id;
}

// SIGNAL 0
bool MainWindow::selectUnread()
{
    bool _t0;
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
    return _t0;
}
QT_END_MOC_NAMESPACE
