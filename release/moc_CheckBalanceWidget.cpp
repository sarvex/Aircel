/****************************************************************************
** Meta object code from reading C++ file 'CheckBalanceWidget.h'
**
** Created: Wed Feb 8 13:31:35 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../CheckBalanceWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CheckBalanceWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CheckBalanceWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      25,   19,   20,   19, 0x0a,
      48,   19,   20,   19, 0x0a,
      72,   66,   20,   19, 0x0a,
     101,   66,   20,   19, 0x0a,
     142,  135,   20,   19, 0x0a,
     163,  135,   20,   19, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_CheckBalanceWidget[] = {
    "CheckBalanceWidget\0\0bool\0"
    "onCheckButtonClicked()\0sendServiceCode()\0"
    "value\0onServiceTextUpdate(QString)\0"
    "onServiceLineTextChanged(QString)\0"
    "status\0onModemPlugged(bool)\0"
    "onModemConnected(bool)\0"
};

void CheckBalanceWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CheckBalanceWidget *_t = static_cast<CheckBalanceWidget *>(_o);
        switch (_id) {
        case 0: { bool _r = _t->onCheckButtonClicked();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 1: { bool _r = _t->sendServiceCode();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 2: { bool _r = _t->onServiceTextUpdate((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: { bool _r = _t->onServiceLineTextChanged((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: { bool _r = _t->onModemPlugged((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->onModemConnected((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CheckBalanceWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CheckBalanceWidget::staticMetaObject = {
    { &QLabel::staticMetaObject, qt_meta_stringdata_CheckBalanceWidget,
      qt_meta_data_CheckBalanceWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CheckBalanceWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CheckBalanceWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CheckBalanceWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CheckBalanceWidget))
        return static_cast<void*>(const_cast< CheckBalanceWidget*>(this));
    return QLabel::qt_metacast(_clname);
}

int CheckBalanceWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
