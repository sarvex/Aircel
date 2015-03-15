/****************************************************************************
** Meta object code from reading C++ file 'MessageWidget.h'
**
** Created: Wed Feb 8 13:31:21 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../MessageWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MessageWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MessageWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      26,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      27,   20,   15,   14, 0x05,
      51,   14,   15,   14, 0x05,
      83,   76,   15,   14, 0x05,
      99,   76,   15,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
     113,   14,   15,   14, 0x0a,
     145,  130,   15,   14, 0x0a,
     179,  167,   15,   14, 0x0a,
     209,  201,   15,   14, 0x0a,
     228,  201,   15,   14, 0x0a,
     258,  241,   15,   14, 0x0a,
     318,  241,   15,   14, 0x0a,
     381,   14,   15,   14, 0x0a,
     410,  403,   15,   14, 0x0a,
     439,   14,   15,   14, 0x0a,
     456,   14,   15,   14, 0x0a,
     474,   14,   15,   14, 0x0a,
     497,   14,   15,   14, 0x0a,
     517,   14,   15,   14, 0x0a,
     538,   14,   15,   14, 0x0a,
     556,   14,   15,   14, 0x0a,
     574,   14,   15,   14, 0x0a,
     593,   14,   15,   14, 0x0a,
     614,   14,   15,   14, 0x0a,
     632,   14,   15,   14, 0x0a,
     659,  652,   15,   14, 0x0a,
     680,  652,   15,   14, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_MessageWidget[] = {
    "MessageWidget\0\0bool\0enable\0"
    "readContactUpdate(bool)\0"
    "messageAnnunciator(bool)\0number\0"
    "number(QString)\0save(QString)\0"
    "onSelectUnread()\0number,content\0"
    "send(QString,QString)\0number,name\0"
    "name(QString,QString)\0message\0"
    "addUpdate(Message)\0add(Message)\0"
    "current,previous\0"
    "onTreeCurrentItemChanged(QTreeWidgetItem*,QTreeWidgetItem*)\0"
    "onTableCurrentItemChanged(QTableWidgetItem*,QTableWidgetItem*)\0"
    "onContextMenu(QPoint)\0filter\0"
    "onSearchTextChanged(QString)\0"
    "onNewTriggered()\0onEditTriggered()\0"
    "onImportantTriggered()\0onDeleteTriggered()\0"
    "onRecoverTriggered()\0onSendTriggered()\0"
    "onSaveTriggered()\0onReplyTriggered()\0"
    "onForwardTriggered()\0onFindTriggered()\0"
    "onExportTriggered()\0status\0"
    "onModemPlugged(bool)\0onModemConnected(bool)\0"
};

void MessageWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MessageWidget *_t = static_cast<MessageWidget *>(_o);
        switch (_id) {
        case 0: { bool _r = _t->readContactUpdate((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 1: { bool _r = _t->messageAnnunciator((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 2: { bool _r = _t->number((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: { bool _r = _t->save((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: { bool _r = _t->onSelectUnread();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->send((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { bool _r = _t->name((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: { bool _r = _t->addUpdate((*reinterpret_cast< Message(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: { bool _r = _t->add((*reinterpret_cast< Message(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: { bool _r = _t->onTreeCurrentItemChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QTreeWidgetItem*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: { bool _r = _t->onTableCurrentItemChanged((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QTableWidgetItem*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: { bool _r = _t->onContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: { bool _r = _t->onSearchTextChanged((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: { bool _r = _t->onNewTriggered();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: { bool _r = _t->onEditTriggered();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 15: { bool _r = _t->onImportantTriggered();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 16: { bool _r = _t->onDeleteTriggered();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 17: { bool _r = _t->onRecoverTriggered();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 18: { bool _r = _t->onSendTriggered();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 19: { bool _r = _t->onSaveTriggered();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 20: { bool _r = _t->onReplyTriggered();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 21: { bool _r = _t->onForwardTriggered();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 22: { bool _r = _t->onFindTriggered();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 23: { bool _r = _t->onExportTriggered();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 24: { bool _r = _t->onModemPlugged((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 25: { bool _r = _t->onModemConnected((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MessageWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MessageWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_MessageWidget,
      qt_meta_data_MessageWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MessageWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MessageWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MessageWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MessageWidget))
        return static_cast<void*>(const_cast< MessageWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int MessageWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
bool MessageWidget::readContactUpdate(bool _t1)
{
    bool _t0;
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
    return _t0;
}

// SIGNAL 1
bool MessageWidget::messageAnnunciator(bool _t1)
{
    bool _t0;
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
    return _t0;
}

// SIGNAL 2
bool MessageWidget::number(QString _t1)
{
    bool _t0;
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
    return _t0;
}

// SIGNAL 3
bool MessageWidget::save(QString _t1)
{
    bool _t0;
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
    return _t0;
}
QT_END_MOC_NAMESPACE
