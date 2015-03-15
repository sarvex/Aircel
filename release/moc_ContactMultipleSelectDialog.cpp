/****************************************************************************
** Meta object code from reading C++ file 'ContactMultipleSelectDialog.h'
**
** Created: Wed Feb 8 13:31:38 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ContactMultipleSelectDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ContactMultipleSelectDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ContactMultipleSelectDialog[] = {

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
      34,   28,   29,   28, 0x0a,
      48,   28,   29,   28, 0x0a,
      78,   66,   29,   28, 0x0a,
     129,  124,   29,   28, 0x0a,
     179,  171,   29,   28, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ContactMultipleSelectDialog[] = {
    "ContactMultipleSelectDialog\0\0bool\0"
    "onOkClicked()\0onCancelClicked()\0"
    "item,column\0onTreeItemDoubleClicked(QTreeWidgetItem*,int)\0"
    "item\0onListItemDoubleClicked(QListWidgetItem*)\0"
    "contact\0onReadContactUpdate(Contact)\0"
};

void ContactMultipleSelectDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ContactMultipleSelectDialog *_t = static_cast<ContactMultipleSelectDialog *>(_o);
        switch (_id) {
        case 0: { bool _r = _t->onOkClicked();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 1: { bool _r = _t->onCancelClicked();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 2: { bool _r = _t->onTreeItemDoubleClicked((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: { bool _r = _t->onListItemDoubleClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: { bool _r = _t->onReadContactUpdate((*reinterpret_cast< const Contact(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ContactMultipleSelectDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ContactMultipleSelectDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ContactMultipleSelectDialog,
      qt_meta_data_ContactMultipleSelectDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ContactMultipleSelectDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ContactMultipleSelectDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ContactMultipleSelectDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ContactMultipleSelectDialog))
        return static_cast<void*>(const_cast< ContactMultipleSelectDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int ContactMultipleSelectDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
