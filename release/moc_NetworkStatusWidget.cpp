/****************************************************************************
** Meta object code from reading C++ file 'NetworkStatusWidget.h'
**
** Created: Wed Feb 8 13:31:28 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../NetworkStatusWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'NetworkStatusWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_NetworkStatusWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      32,   26,   21,   20, 0x0a,
      61,   26,   21,   20, 0x0a,
      83,   26,   21,   20, 0x0a,
     115,   26,   21,   20, 0x0a,
     154,   26,   21,   20, 0x0a,
     193,   26,   21,   20, 0x0a,
     237,  230,   21,   20, 0x0a,
     258,  230,   21,   20, 0x0a,
     281,   20,   21,   20, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_NetworkStatusWidget[] = {
    "NetworkStatusWidget\0\0bool\0value\0"
    "onNetworkNameUpdate(QString)\0"
    "onRssiUpdate(QString)\0"
    "onCellIdentifierUpdate(QString)\0"
    "onCsNetworkRegistrationUpdate(QString)\0"
    "onPsNetworkRegistrationUpdate(QString)\0"
    "onPsNetworkAttachmentUpdate(QString)\0"
    "status\0onModemPlugged(bool)\0"
    "onModemConnected(bool)\0onTimer()\0"
};

void NetworkStatusWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        NetworkStatusWidget *_t = static_cast<NetworkStatusWidget *>(_o);
        switch (_id) {
        case 0: { bool _r = _t->onNetworkNameUpdate((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 1: { bool _r = _t->onRssiUpdate((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 2: { bool _r = _t->onCellIdentifierUpdate((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: { bool _r = _t->onCsNetworkRegistrationUpdate((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: { bool _r = _t->onPsNetworkRegistrationUpdate((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->onPsNetworkAttachmentUpdate((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { bool _r = _t->onModemPlugged((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: { bool _r = _t->onModemConnected((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: { bool _r = _t->onTimer();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData NetworkStatusWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject NetworkStatusWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_NetworkStatusWidget,
      qt_meta_data_NetworkStatusWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &NetworkStatusWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *NetworkStatusWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *NetworkStatusWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_NetworkStatusWidget))
        return static_cast<void*>(const_cast< NetworkStatusWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int NetworkStatusWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
