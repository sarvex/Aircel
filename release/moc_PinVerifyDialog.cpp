/****************************************************************************
** Meta object code from reading C++ file 'PinVerifyDialog.h'
**
** Created: Wed Feb 8 13:31:20 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../PinVerifyDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PinVerifyDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PinVerifyDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      27,   22,   17,   16, 0x0a,
      59,   53,   17,   16, 0x0a,
      84,   16,   17,   16, 0x0a,
      98,   16,   17,   16, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PinVerifyDialog[] = {
    "PinVerifyDialog\0\0bool\0text\0"
    "onPinTextChanged(QString)\0value\0"
    "onAttemptUpdate(QString)\0onOkClicked()\0"
    "onCancelClicked()\0"
};

void PinVerifyDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PinVerifyDialog *_t = static_cast<PinVerifyDialog *>(_o);
        switch (_id) {
        case 0: { bool _r = _t->onPinTextChanged((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 1: { bool _r = _t->onAttemptUpdate((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 2: { bool _r = _t->onOkClicked();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: { bool _r = _t->onCancelClicked();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PinVerifyDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PinVerifyDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_PinVerifyDialog,
      qt_meta_data_PinVerifyDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PinVerifyDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PinVerifyDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PinVerifyDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PinVerifyDialog))
        return static_cast<void*>(const_cast< PinVerifyDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int PinVerifyDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
