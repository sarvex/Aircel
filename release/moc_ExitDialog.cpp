/****************************************************************************
** Meta object code from reading C++ file 'ExitDialog.h'
**
** Created: Wed Feb 8 13:31:15 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ExitDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ExitDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ExitDialog[] = {

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
      17,   11,   12,   11, 0x0a,
      43,   11,   12,   11, 0x0a,
      70,   11,   12,   11, 0x0a,
      95,   88,   12,   11, 0x0a,
     116,   88,   12,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ExitDialog[] = {
    "ExitDialog\0\0bool\0onShutDownDeviceClicked()\0"
    "onQuitApplicationClicked()\0onCancelClicked()\0"
    "status\0onModemPlugged(bool)\0"
    "onModemConnected(bool)\0"
};

void ExitDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ExitDialog *_t = static_cast<ExitDialog *>(_o);
        switch (_id) {
        case 0: { bool _r = _t->onShutDownDeviceClicked();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 1: { bool _r = _t->onQuitApplicationClicked();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 2: { bool _r = _t->onCancelClicked();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: { bool _r = _t->onModemPlugged((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: { bool _r = _t->onModemConnected((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ExitDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ExitDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ExitDialog,
      qt_meta_data_ExitDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ExitDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ExitDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ExitDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ExitDialog))
        return static_cast<void*>(const_cast< ExitDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int ExitDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
