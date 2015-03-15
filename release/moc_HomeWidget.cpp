/****************************************************************************
** Meta object code from reading C++ file 'HomeWidget.h'
**
** Created: Wed Feb 8 13:31:24 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../HomeWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'HomeWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_HomeWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      17,   11,   12,   11, 0x0a,
      34,   11,   12,   11, 0x0a,
      59,   11,   12,   11, 0x0a,
      87,   11,   12,   11, 0x0a,
     124,   11,   12,   11, 0x0a,
     153,   11,   12,   11, 0x0a,
     189,  183,   12,   11, 0x0a,
     217,  183,   12,   11, 0x0a,
     246,  183,   12,   11, 0x0a,
     278,  271,   12,   11, 0x0a,
     299,  271,   12,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_HomeWidget[] = {
    "HomeWidget\0\0bool\0onResetNetwork()\0"
    "onConnectButtonClicked()\0"
    "onDisconnectButtonClicked()\0"
    "onCustomerSupportLinkButtonClicked()\0"
    "onPrepaidLinkButtonClicked()\0"
    "onPostpaidLinkButtonClicked()\0value\0"
    "onSignalStrengthUpdate(int)\0"
    "onHomeNetworkUpdate(QString)\0"
    "onPinCodeUpdate(QString)\0status\0"
    "onModemPlugged(bool)\0onModemConnected(bool)\0"
};

void HomeWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        HomeWidget *_t = static_cast<HomeWidget *>(_o);
        switch (_id) {
        case 0: { bool _r = _t->onResetNetwork();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 1: { bool _r = _t->onConnectButtonClicked();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 2: { bool _r = _t->onDisconnectButtonClicked();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: { bool _r = _t->onCustomerSupportLinkButtonClicked();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: { bool _r = _t->onPrepaidLinkButtonClicked();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->onPostpaidLinkButtonClicked();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { bool _r = _t->onSignalStrengthUpdate((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: { bool _r = _t->onHomeNetworkUpdate((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: { bool _r = _t->onPinCodeUpdate((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: { bool _r = _t->onModemPlugged((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: { bool _r = _t->onModemConnected((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData HomeWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject HomeWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_HomeWidget,
      qt_meta_data_HomeWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &HomeWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *HomeWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *HomeWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_HomeWidget))
        return static_cast<void*>(const_cast< HomeWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int HomeWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
