/****************************************************************************
** Meta object code from reading C++ file 'MessageDialog.h'
**
** Created: Wed Feb 8 13:31:16 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../MessageDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MessageDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MessageDialog[] = {

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
      27,   20,   15,   14, 0x0a,
      56,   14,   15,   14, 0x0a,
      79,   14,   15,   14, 0x0a,
      97,   14,   15,   14, 0x0a,
     113,   14,   15,   14, 0x0a,
     129,   14,   15,   14, 0x0a,
     154,  147,   15,   14, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_MessageDialog[] = {
    "MessageDialog\0\0bool\0number\0"
    "onNumberTextChanged(QString)\0"
    "onContentTextChanged()\0onSendToClicked()\0"
    "onSendClicked()\0onSaveClicked()\0"
    "onCancelClicked()\0status\0onModemPlugged(bool)\0"
};

void MessageDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MessageDialog *_t = static_cast<MessageDialog *>(_o);
        switch (_id) {
        case 0: { bool _r = _t->onNumberTextChanged((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 1: { bool _r = _t->onContentTextChanged();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 2: { bool _r = _t->onSendToClicked();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: { bool _r = _t->onSendClicked();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: { bool _r = _t->onSaveClicked();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->onCancelClicked();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { bool _r = _t->onModemPlugged((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MessageDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MessageDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_MessageDialog,
      qt_meta_data_MessageDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MessageDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MessageDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MessageDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MessageDialog))
        return static_cast<void*>(const_cast< MessageDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int MessageDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
