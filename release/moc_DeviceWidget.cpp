/****************************************************************************
** Meta object code from reading C++ file 'DeviceWidget.h'
**
** Created: Wed Feb 8 13:31:36 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../DeviceWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DeviceWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DeviceWidget[] = {

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
      25,   19,   14,   13, 0x0a,
      53,   19,   14,   13, 0x0a,
      86,   19,   14,   13, 0x0a,
     116,   19,   14,   13, 0x0a,
     138,   19,   14,   13, 0x0a,
     171,   19,   14,   13, 0x0a,
     211,  204,   14,   13, 0x0a,
     232,  204,   14,   13, 0x0a,
     255,   13,   14,   13, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_DeviceWidget[] = {
    "DeviceWidget\0\0bool\0value\0"
    "onDeviceNameUpdate(QString)\0"
    "onApplicationPortUpdate(QString)\0"
    "onSerialNumberUpdate(QString)\0"
    "onImeiUpdate(QString)\0"
    "onHardwareVersionUpdate(QString)\0"
    "onFirmwareVersionUpdate(QString)\0"
    "status\0onModemPlugged(bool)\0"
    "onModemConnected(bool)\0onTimer()\0"
};

void DeviceWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DeviceWidget *_t = static_cast<DeviceWidget *>(_o);
        switch (_id) {
        case 0: { bool _r = _t->onDeviceNameUpdate((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 1: { bool _r = _t->onApplicationPortUpdate((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 2: { bool _r = _t->onSerialNumberUpdate((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: { bool _r = _t->onImeiUpdate((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: { bool _r = _t->onHardwareVersionUpdate((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->onFirmwareVersionUpdate((*reinterpret_cast< QString(*)>(_a[1])));
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

const QMetaObjectExtraData DeviceWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DeviceWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_DeviceWidget,
      qt_meta_data_DeviceWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DeviceWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DeviceWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DeviceWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DeviceWidget))
        return static_cast<void*>(const_cast< DeviceWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int DeviceWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
