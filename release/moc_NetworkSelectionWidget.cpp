/****************************************************************************
** Meta object code from reading C++ file 'NetworkSelectionWidget.h'
**
** Created: Wed Feb 8 13:31:26 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../NetworkSelectionWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'NetworkSelectionWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_NetworkSelectionWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      64,   29,   24,   23, 0x0a,
     130,  125,   24,   23, 0x0a,
     168,   23,   24,   23, 0x0a,
     193,   23,   24,   23, 0x0a,
     219,   23,   24,   23, 0x0a,
     246,   23,   24,   23, 0x0a,
     277,  270,   24,   23, 0x0a,
     300,  270,   24,   23, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_NetworkSelectionWidget[] = {
    "NetworkSelectionWidget\0\0bool\0"
    "mode,major,minor,identifier,status\0"
    "onNetworkModeUpdate(QString,QString,QString,QString,QString)\0"
    "item\0onTableItemClicked(QTableWidgetItem*)\0"
    "onRefreshButtonClicked()\0"
    "onRegisterButtonClicked()\0"
    "onAutomaticButtonClicked()\0"
    "onManualButtonClicked()\0status\0"
    "onModemConnected(bool)\0onModemPlugged(bool)\0"
};

void NetworkSelectionWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        NetworkSelectionWidget *_t = static_cast<NetworkSelectionWidget *>(_o);
        switch (_id) {
        case 0: { bool _r = _t->onNetworkModeUpdate((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 1: { bool _r = _t->onTableItemClicked((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 2: { bool _r = _t->onRefreshButtonClicked();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: { bool _r = _t->onRegisterButtonClicked();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: { bool _r = _t->onAutomaticButtonClicked();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->onManualButtonClicked();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { bool _r = _t->onModemConnected((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: { bool _r = _t->onModemPlugged((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData NetworkSelectionWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject NetworkSelectionWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_NetworkSelectionWidget,
      qt_meta_data_NetworkSelectionWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &NetworkSelectionWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *NetworkSelectionWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *NetworkSelectionWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_NetworkSelectionWidget))
        return static_cast<void*>(const_cast< NetworkSelectionWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int NetworkSelectionWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
