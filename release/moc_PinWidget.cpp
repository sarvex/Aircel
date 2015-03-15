/****************************************************************************
** Meta object code from reading C++ file 'PinWidget.h'
**
** Created: Wed Feb 8 13:31:30 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../PinWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PinWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PinWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      16,   10,   11,   10, 0x0a,
      40,   10,   11,   10, 0x0a,
      64,   10,   11,   10, 0x0a,
      88,   10,   11,   10, 0x0a,
     118,  112,   11,   10, 0x0a,
     144,  112,   11,   10, 0x0a,
     169,  112,   11,   10, 0x0a,
     202,  112,   11,   10, 0x0a,
     236,  229,   11,   10, 0x0a,
     257,  229,   11,   10, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PinWidget[] = {
    "PinWidget\0\0bool\0onEnableButtonClicked()\0"
    "onModifyButtonClicked()\0onVerifyButtonClicked()\0"
    "onUnlockButtonClicked()\0value\0"
    "onPinQueryUpdate(QString)\0"
    "onPinCodeUpdate(QString)\0"
    "onIncorrectPinPukUpdate(QString)\0"
    "onPinModifyUpdate(QString)\0status\0"
    "onModemPlugged(bool)\0onModemConnected(bool)\0"
};

void PinWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PinWidget *_t = static_cast<PinWidget *>(_o);
        switch (_id) {
        case 0: { bool _r = _t->onEnableButtonClicked();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 1: { bool _r = _t->onModifyButtonClicked();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 2: { bool _r = _t->onVerifyButtonClicked();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: { bool _r = _t->onUnlockButtonClicked();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: { bool _r = _t->onPinQueryUpdate((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->onPinCodeUpdate((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { bool _r = _t->onIncorrectPinPukUpdate((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: { bool _r = _t->onPinModifyUpdate((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: { bool _r = _t->onModemPlugged((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: { bool _r = _t->onModemConnected((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PinWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PinWidget::staticMetaObject = {
    { &QLabel::staticMetaObject, qt_meta_stringdata_PinWidget,
      qt_meta_data_PinWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PinWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PinWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PinWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PinWidget))
        return static_cast<void*>(const_cast< PinWidget*>(this));
    return QLabel::qt_metacast(_clname);
}

int PinWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
