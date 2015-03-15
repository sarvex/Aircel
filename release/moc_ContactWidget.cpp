/****************************************************************************
** Meta object code from reading C++ file 'ContactWidget.h'
**
** Created: Wed Feb 8 13:31:44 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ContactWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ContactWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ContactWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      26,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      35,   20,   15,   14, 0x05,
      69,   57,   15,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
      98,   91,   15,   14, 0x0a,
     131,  124,   15,   14, 0x0a,
     155,  147,   15,   14, 0x0a,
     174,  147,   15,   14, 0x0a,
     204,  187,   15,   14, 0x0a,
     270,  264,   15,   14, 0x0a,
     292,  187,   15,   14, 0x0a,
     362,  355,   15,   14, 0x0a,
     391,   14,   15,   14, 0x0a,
     408,   14,   15,   14, 0x0a,
     426,   14,   15,   14, 0x0a,
     446,   14,   15,   14, 0x0a,
     467,   14,   15,   14, 0x0a,
     485,   14,   15,   14, 0x0a,
     503,   14,   15,   14, 0x0a,
     523,   14,   15,   14, 0x0a,
     543,   14,   15,   14, 0x0a,
     574,   14,   15,   14, 0x0a,
     597,   14,   15,   14, 0x0a,
     628,   14,   15,   14, 0x0a,
     663,  651,   15,   14, 0x0a,
     707,  701,   15,   14, 0x0a,
     744,  737,   15,   14, 0x0a,
     765,  737,   15,   14, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ContactWidget[] = {
    "ContactWidget\0\0bool\0number,content\0"
    "send(QString,QString)\0number,name\0"
    "name(QString,QString)\0enable\0"
    "onReadContactUpdate(bool)\0number\0"
    "number(QString)\0contact\0addUpdate(Contact)\0"
    "add(Contact)\0current,previous\0"
    "onTreeCurrentItemChanged(QTreeWidgetItem*,QTreeWidgetItem*)\0"
    "point\0onContextMenu(QPoint)\0"
    "onTableCurrentItemChanged(QTableWidgetItem*,QTableWidgetItem*)\0"
    "filter\0onSearchTextChanged(QString)\0"
    "onNewTriggered()\0onEditTriggered()\0"
    "onDeleteTriggered()\0onMessageTriggered()\0"
    "onSendTriggered()\0onFindTriggered()\0"
    "onImportTriggered()\0onExportTriggered()\0"
    "onMoveToApplicationTriggered()\0"
    "onMoveToSimTriggered()\0"
    "onCopyToApplicationTriggered()\0"
    "onCopyToSimTriggered()\0count,total\0"
    "onContactCountUpdate(QString,QString)\0"
    "index\0onWriteContactUpdate(QString)\0"
    "status\0onModemPlugged(bool)\0"
    "onModemConnected(bool)\0"
};

void ContactWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ContactWidget *_t = static_cast<ContactWidget *>(_o);
        switch (_id) {
        case 0: { bool _r = _t->send((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 1: { bool _r = _t->name((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 2: { bool _r = _t->onReadContactUpdate((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: { bool _r = _t->number((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: { bool _r = _t->addUpdate((*reinterpret_cast< Contact(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->add((*reinterpret_cast< Contact(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { bool _r = _t->onTreeCurrentItemChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QTreeWidgetItem*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: { bool _r = _t->onContextMenu((*reinterpret_cast< QPoint(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: { bool _r = _t->onTableCurrentItemChanged((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QTableWidgetItem*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: { bool _r = _t->onSearchTextChanged((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: { bool _r = _t->onNewTriggered();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: { bool _r = _t->onEditTriggered();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: { bool _r = _t->onDeleteTriggered();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: { bool _r = _t->onMessageTriggered();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: { bool _r = _t->onSendTriggered();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 15: { bool _r = _t->onFindTriggered();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 16: { bool _r = _t->onImportTriggered();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 17: { bool _r = _t->onExportTriggered();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 18: { bool _r = _t->onMoveToApplicationTriggered();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 19: { bool _r = _t->onMoveToSimTriggered();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 20: { bool _r = _t->onCopyToApplicationTriggered();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 21: { bool _r = _t->onCopyToSimTriggered();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 22: { bool _r = _t->onContactCountUpdate((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 23: { bool _r = _t->onWriteContactUpdate((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 24: { bool _r = _t->onModemPlugged((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 25: { bool _r = _t->onModemConnected((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ContactWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ContactWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ContactWidget,
      qt_meta_data_ContactWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ContactWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ContactWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ContactWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ContactWidget))
        return static_cast<void*>(const_cast< ContactWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int ContactWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 26)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 26;
    }
    return _id;
}

// SIGNAL 0
bool ContactWidget::send(QString _t1, QString _t2)
{
    bool _t0;
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
    return _t0;
}

// SIGNAL 1
bool ContactWidget::name(QString _t1, QString _t2)
{
    bool _t0;
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
    return _t0;
}
QT_END_MOC_NAMESPACE
