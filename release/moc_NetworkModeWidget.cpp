/****************************************************************************
** Meta object code from reading C++ file 'NetworkModeWidget.h'
**
** Created: Wed Feb 8 13:31:25 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../NetworkModeWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'NetworkModeWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_NetworkModeWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      24,   18,   19,   18, 0x05,

 // slots: signature, parameters, type, tag, flags
      39,   18,   19,   18, 0x0a,
      56,   18,   19,   18, 0x0a,
      79,   73,   19,   18, 0x0a,
     110,  104,   19,   18, 0x0a,
     157,  150,   19,   18, 0x0a,
     180,  150,   19,   18, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_NetworkModeWidget[] = {
    "NetworkModeWidget\0\0bool\0resetNetwork()\0"
    "onApplyClicked()\0onResetClicked()\0"
    "index\0onNetworkModeChange(int)\0value\0"
    "onGetSelectedNetworkModeUpdate(QString)\0"
    "status\0onModemConnected(bool)\0"
    "onModemPlugged(bool)\0"
};

void NetworkModeWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        NetworkModeWidget *_t = static_cast<NetworkModeWidget *>(_o);
        switch (_id) {
        case 0: { bool _r = _t->resetNetwork();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 1: { bool _r = _t->onApplyClicked();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 2: { bool _r = _t->onResetClicked();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: { bool _r = _t->onNetworkModeChange((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: { bool _r = _t->onGetSelectedNetworkModeUpdate((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->onModemConnected((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { bool _r = _t->onModemPlugged((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData NetworkModeWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject NetworkModeWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_NetworkModeWidget,
      qt_meta_data_NetworkModeWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &NetworkModeWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *NetworkModeWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *NetworkModeWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_NetworkModeWidget))
        return static_cast<void*>(const_cast< NetworkModeWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int NetworkModeWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
bool NetworkModeWidget::resetNetwork()
{
    bool _t0;
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
    return _t0;
}
QT_END_MOC_NAMESPACE
