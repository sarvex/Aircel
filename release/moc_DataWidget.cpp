/****************************************************************************
** Meta object code from reading C++ file 'DataWidget.h'
**
** Created: Wed Feb 8 13:31:46 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../DataWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DataWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DataWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      17,   11,   12,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
      30,   11,   12,   11, 0x0a,
      63,   47,   12,   11, 0x0a,
      99,   92,   12,   11, 0x0a,
     120,   92,   12,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_DataWidget[] = {
    "DataWidget\0\0bool\0resetUsage()\0"
    "onResetClicked()\0upload,download\0"
    "onUsageUpdate(double,double)\0status\0"
    "onModemPlugged(bool)\0onModemConnected(bool)\0"
};

void DataWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DataWidget *_t = static_cast<DataWidget *>(_o);
        switch (_id) {
        case 0: { bool _r = _t->resetUsage();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 1: { bool _r = _t->onResetClicked();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 2: { bool _r = _t->onUsageUpdate((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: { bool _r = _t->onModemPlugged((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: { bool _r = _t->onModemConnected((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData DataWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DataWidget::staticMetaObject = {
    { &QLabel::staticMetaObject, qt_meta_stringdata_DataWidget,
      qt_meta_data_DataWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DataWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DataWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DataWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DataWidget))
        return static_cast<void*>(const_cast< DataWidget*>(this));
    return QLabel::qt_metacast(_clname);
}

int DataWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
bool DataWidget::resetUsage()
{
    bool _t0;
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
    return _t0;
}
QT_END_MOC_NAMESPACE
