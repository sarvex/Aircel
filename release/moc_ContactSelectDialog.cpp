/****************************************************************************
** Meta object code from reading C++ file 'ContactSelectDialog.h'
**
** Created: Wed Feb 8 13:31:46 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ContactSelectDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ContactSelectDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ContactSelectDialog[] = {

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
      26,   20,   21,   20, 0x0a,
      40,   20,   21,   20, 0x0a,
      63,   58,   21,   20, 0x0a,
      99,   58,   21,   20, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ContactSelectDialog[] = {
    "ContactSelectDialog\0\0bool\0onOkClicked()\0"
    "onCancelClicked()\0item\0"
    "onListItemClicked(QListWidgetItem*)\0"
    "onListItemDoubleClicked(QListWidgetItem*)\0"
};

void ContactSelectDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ContactSelectDialog *_t = static_cast<ContactSelectDialog *>(_o);
        switch (_id) {
        case 0: { bool _r = _t->onOkClicked();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 1: { bool _r = _t->onCancelClicked();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 2: { bool _r = _t->onListItemClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: { bool _r = _t->onListItemDoubleClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ContactSelectDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ContactSelectDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ContactSelectDialog,
      qt_meta_data_ContactSelectDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ContactSelectDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ContactSelectDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ContactSelectDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ContactSelectDialog))
        return static_cast<void*>(const_cast< ContactSelectDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int ContactSelectDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
