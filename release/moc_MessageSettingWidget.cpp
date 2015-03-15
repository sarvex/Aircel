/****************************************************************************
** Meta object code from reading C++ file 'MessageSettingWidget.h'
**
** Created: Wed Feb 8 13:31:22 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../MessageSettingWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MessageSettingWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MessageSettingWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      27,   21,   22,   21, 0x0a,
      50,   44,   22,   21, 0x0a,
      72,   21,   22,   21, 0x0a,
      91,   84,   22,   21, 0x0a,
     112,   84,   22,   21, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_MessageSettingWidget[] = {
    "MessageSettingWidget\0\0bool\0onApplyClicked()\0"
    "state\0onDeliveryReport(int)\0onChanged()\0"
    "status\0onModemPlugged(bool)\0"
    "onModemConnected(bool)\0"
};

void MessageSettingWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MessageSettingWidget *_t = static_cast<MessageSettingWidget *>(_o);
        switch (_id) {
        case 0: { bool _r = _t->onApplyClicked();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 1: { bool _r = _t->onDeliveryReport((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 2: { bool _r = _t->onChanged();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: { bool _r = _t->onModemPlugged((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: { bool _r = _t->onModemConnected((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MessageSettingWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MessageSettingWidget::staticMetaObject = {
    { &QLabel::staticMetaObject, qt_meta_stringdata_MessageSettingWidget,
      qt_meta_data_MessageSettingWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MessageSettingWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MessageSettingWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MessageSettingWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MessageSettingWidget))
        return static_cast<void*>(const_cast< MessageSettingWidget*>(this));
    return QLabel::qt_metacast(_clname);
}

int MessageSettingWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
