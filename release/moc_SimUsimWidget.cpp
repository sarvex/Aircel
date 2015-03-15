/****************************************************************************
** Meta object code from reading C++ file 'SimUsimWidget.h'
**
** Created: Wed Feb 8 13:31:33 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../SimUsimWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SimUsimWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SimUsimWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      26,   20,   15,   14, 0x0a,
      68,   53,   15,   14, 0x0a,
     106,   20,   15,   14, 0x0a,
     143,   20,   15,   14, 0x0a,
     175,  168,   15,   14, 0x0a,
     196,  168,   15,   14, 0x0a,
     219,   14,   15,   14, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_SimUsimWidget[] = {
    "SimUsimWidget\0\0bool\0value\0"
    "onOwnNumberUpdate(QString)\0total,capacity\0"
    "onContactCountUpdate(QString,QString)\0"
    "onMessageCenterNumberUpdate(QString)\0"
    "onPinCodeUpdate(QString)\0status\0"
    "onModemPlugged(bool)\0onModemConnected(bool)\0"
    "onTimer()\0"
};

void SimUsimWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SimUsimWidget *_t = static_cast<SimUsimWidget *>(_o);
        switch (_id) {
        case 0: { bool _r = _t->onOwnNumberUpdate((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 1: { bool _r = _t->onContactCountUpdate((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 2: { bool _r = _t->onMessageCenterNumberUpdate((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: { bool _r = _t->onPinCodeUpdate((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: { bool _r = _t->onModemPlugged((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->onModemConnected((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { bool _r = _t->onTimer();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SimUsimWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SimUsimWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SimUsimWidget,
      qt_meta_data_SimUsimWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SimUsimWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SimUsimWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SimUsimWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SimUsimWidget))
        return static_cast<void*>(const_cast< SimUsimWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int SimUsimWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE
