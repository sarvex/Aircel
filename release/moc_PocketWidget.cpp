/****************************************************************************
** Meta object code from reading C++ file 'PocketWidget.h'
**
** Created: Wed Feb 8 13:31:31 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../PocketWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PocketWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PocketWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      25,   19,   14,   13, 0x0a,
      65,   58,   14,   13, 0x0a,
      86,   58,   14,   13, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PocketWidget[] = {
    "PocketWidget\0\0bool\0value\0"
    "onSoftwareVersionUpdate(QString)\0"
    "status\0onModemPlugged(bool)\0"
    "onModemConnected(bool)\0"
};

void PocketWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PocketWidget *_t = static_cast<PocketWidget *>(_o);
        switch (_id) {
        case 0: { bool _r = _t->onSoftwareVersionUpdate((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 1: { bool _r = _t->onModemPlugged((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 2: { bool _r = _t->onModemConnected((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PocketWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PocketWidget::staticMetaObject = {
    { &QLabel::staticMetaObject, qt_meta_stringdata_PocketWidget,
      qt_meta_data_PocketWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PocketWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PocketWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PocketWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PocketWidget))
        return static_cast<void*>(const_cast< PocketWidget*>(this));
    return QLabel::qt_metacast(_clname);
}

int PocketWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
