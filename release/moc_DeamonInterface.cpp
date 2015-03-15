/****************************************************************************
** Meta object code from reading C++ file 'DeamonInterface.h'
**
** Created: Wed Feb 8 13:31:13 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../DeamonInterface.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DeamonInterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DeamonInterface[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      51,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      50,       // signalCount

 // signals: signature, parameters, type, tag, flags
      28,   22,   17,   16, 0x05,
      58,   22,   17,   16, 0x05,
      84,   22,   17,   16, 0x05,
     128,  110,   17,   16, 0x05,
     178,  170,   17,   16, 0x05,
     209,  170,   17,   16, 0x05,
     239,  170,   17,   16, 0x05,
     266,  170,   17,   16, 0x05,
     301,  293,   17,   16, 0x05,
     328,   16,   17,   16, 0x05,
     341,   16,   17,   16, 0x05,
     358,   16,   17,   16, 0x05,
     375,   16,   17,   16, 0x05,
     391,   16,   17,   16, 0x05,
     410,   16,   17,   16, 0x05,
     435,  429,   17,   16, 0x05,
     463,  429,   17,   16, 0x05,
     491,   22,   17,   16, 0x05,
     519,   22,   17,   16, 0x05,
     550,   22,   17,   16, 0x05,
     570,   22,   17,   16, 0x05,
     608,   22,   17,   16, 0x05,
     634,   22,   17,   16, 0x05,
     663,   22,   17,   16, 0x05,
     691,   22,   17,   16, 0x05,
     722,   22,   17,   16, 0x05,
     753,   22,   17,   16, 0x05,
     781,   22,   17,   16, 0x05,
     812,   22,   17,   16, 0x05,
     849,  837,   17,   16, 0x05,
     885,   22,   17,   16, 0x05,
     920,   22,   17,   16, 0x05,
     943,   22,   17,   16, 0x05,
     967,   22,   17,   16, 0x05,
     994,   22,   17,   16, 0x05,
    1014,   22,   17,   16, 0x05,
    1044,   22,   17,   16, 0x05,
    1071,   22,   17,   16, 0x05,
    1108,   22,   17,   16, 0x05,
    1145,   22,   17,   16, 0x05,
    1180,   22,   17,   16, 0x05,
    1199,   22,   17,   16, 0x05,
    1235,   22,   17,   16, 0x05,
    1264,   22,   17,   16, 0x05,
    1289,   22,   17,   16, 0x05,
    1327, 1320,   17,   16, 0x05,
    1346, 1320,   17,   16, 0x05,
    1369,   22,   17,   16, 0x05,
    1388,   22,   17,   16, 0x05,
    1442, 1407,   17,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
    1501,   16,   17,   16, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_DeamonInterface[] = {
    "DeamonInterface\0\0bool\0value\0"
    "signalStrengthUpdate(QString)\0"
    "pinAttemptUpdate(QString)\0"
    "pukAttemptUpdate(QString)\0value,networkName\0"
    "networkDisplayModeUpdate(QString,QString)\0"
    "message\0messageRecievedUpdate(Message)\0"
    "deliveryReportUpdate(Message)\0"
    "readMessageUpdate(Message)\0"
    "listMessageUpdate(Message)\0contact\0"
    "readContactUpdate(Contact)\0ringUpdate()\0"
    "stopRingUpdate()\0ringBackUpdate()\0"
    "callEndUpdate()\0callAnswerUpdate()\0"
    "callAcceptUpdate()\0index\0"
    "writeContactUpdate(QString)\0"
    "writeMessageUpdate(QString)\0"
    "manufacturerUpdate(QString)\0"
    "firmwareVersionUpdate(QString)\0"
    "imeiUpdate(QString)\0"
    "getSelectedNetworkModeUpdate(QString)\0"
    "deviceNameUpdate(QString)\0"
    "interfacePortUpdate(QString)\0"
    "serialNumberUpdate(QString)\0"
    "softwareVersionUpdate(QString)\0"
    "hardwareVersionUpdate(QString)\0"
    "checkBalanceUpdate(QString)\0"
    "incorrectPinPukUpdate(QString)\0"
    "ownNumberUpdate(QString)\0count,total\0"
    "contactCountUpdate(QString,QString)\0"
    "messageCenterNumberUpdate(QString)\0"
    "pinCodeUpdate(QString)\0pinQueryUpdate(QString)\0"
    "networkNameUpdate(QString)\0"
    "rssiUpdate(QString)\0cellIdentifierUpdate(QString)\0"
    "homeNetworkUpdate(QString)\0"
    "csNetworkRegistrationUpdate(QString)\0"
    "psNetworkRegistrationUpdate(QString)\0"
    "psNetworkAttachmentUpdate(QString)\0"
    "apnUpdate(QString)\0"
    "networkSelectionModeUpdate(QString)\0"
    "pinCodeStatusUpdate(QString)\0"
    "pinModifyUpdate(QString)\0"
    "accessPointNameUpdate(QString)\0status\0"
    "modemPlugged(bool)\0newMessageUpdate(bool)\0"
    "prlUpdate(QString)\0esnUpdate(QString)\0"
    "mode,major,minor,identifier,status\0"
    "networkModeUpdate(QString,QString,QString,QString,QString)\0"
    "onSystemUpdateTimer()\0"
};

void DeamonInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DeamonInterface *_t = static_cast<DeamonInterface *>(_o);
        switch (_id) {
        case 0: { bool _r = _t->signalStrengthUpdate((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 1: { bool _r = _t->pinAttemptUpdate((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 2: { bool _r = _t->pukAttemptUpdate((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: { bool _r = _t->networkDisplayModeUpdate((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: { bool _r = _t->messageRecievedUpdate((*reinterpret_cast< Message(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->deliveryReportUpdate((*reinterpret_cast< Message(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { bool _r = _t->readMessageUpdate((*reinterpret_cast< Message(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: { bool _r = _t->listMessageUpdate((*reinterpret_cast< Message(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: { bool _r = _t->readContactUpdate((*reinterpret_cast< Contact(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: { bool _r = _t->ringUpdate();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: { bool _r = _t->stopRingUpdate();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: { bool _r = _t->ringBackUpdate();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: { bool _r = _t->callEndUpdate();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: { bool _r = _t->callAnswerUpdate();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: { bool _r = _t->callAcceptUpdate();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 15: { bool _r = _t->writeContactUpdate((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 16: { bool _r = _t->writeMessageUpdate((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 17: { bool _r = _t->manufacturerUpdate((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 18: { bool _r = _t->firmwareVersionUpdate((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 19: { bool _r = _t->imeiUpdate((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 20: { bool _r = _t->getSelectedNetworkModeUpdate((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 21: { bool _r = _t->deviceNameUpdate((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 22: { bool _r = _t->interfacePortUpdate((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 23: { bool _r = _t->serialNumberUpdate((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 24: { bool _r = _t->softwareVersionUpdate((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 25: { bool _r = _t->hardwareVersionUpdate((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 26: { bool _r = _t->checkBalanceUpdate((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 27: { bool _r = _t->incorrectPinPukUpdate((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 28: { bool _r = _t->ownNumberUpdate((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 29: { bool _r = _t->contactCountUpdate((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 30: { bool _r = _t->messageCenterNumberUpdate((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 31: { bool _r = _t->pinCodeUpdate((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 32: { bool _r = _t->pinQueryUpdate((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 33: { bool _r = _t->networkNameUpdate((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 34: { bool _r = _t->rssiUpdate((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 35: { bool _r = _t->cellIdentifierUpdate((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 36: { bool _r = _t->homeNetworkUpdate((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 37: { bool _r = _t->csNetworkRegistrationUpdate((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 38: { bool _r = _t->psNetworkRegistrationUpdate((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 39: { bool _r = _t->psNetworkAttachmentUpdate((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 40: { bool _r = _t->apnUpdate((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 41: { bool _r = _t->networkSelectionModeUpdate((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 42: { bool _r = _t->pinCodeStatusUpdate((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 43: { bool _r = _t->pinModifyUpdate((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 44: { bool _r = _t->accessPointNameUpdate((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 45: { bool _r = _t->modemPlugged((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 46: { bool _r = _t->newMessageUpdate((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 47: { bool _r = _t->prlUpdate((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 48: { bool _r = _t->esnUpdate((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 49: { bool _r = _t->networkModeUpdate((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 50: { bool _r = _t->onSystemUpdateTimer();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData DeamonInterface::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DeamonInterface::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_DeamonInterface,
      qt_meta_data_DeamonInterface, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DeamonInterface::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DeamonInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DeamonInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DeamonInterface))
        return static_cast<void*>(const_cast< DeamonInterface*>(this));
    return QThread::qt_metacast(_clname);
}

int DeamonInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 51)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 51;
    }
    return _id;
}

// SIGNAL 0
bool DeamonInterface::signalStrengthUpdate(QString _t1)
{
    bool _t0;
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
    return _t0;
}

// SIGNAL 1
bool DeamonInterface::pinAttemptUpdate(QString _t1)
{
    bool _t0;
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
    return _t0;
}

// SIGNAL 2
bool DeamonInterface::pukAttemptUpdate(QString _t1)
{
    bool _t0;
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
    return _t0;
}

// SIGNAL 3
bool DeamonInterface::networkDisplayModeUpdate(QString _t1, QString _t2)
{
    bool _t0;
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
    return _t0;
}

// SIGNAL 4
bool DeamonInterface::messageRecievedUpdate(Message _t1)
{
    bool _t0;
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
    return _t0;
}

// SIGNAL 5
bool DeamonInterface::deliveryReportUpdate(Message _t1)
{
    bool _t0;
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
    return _t0;
}

// SIGNAL 6
bool DeamonInterface::readMessageUpdate(Message _t1)
{
    bool _t0;
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
    return _t0;
}

// SIGNAL 7
bool DeamonInterface::listMessageUpdate(Message _t1)
{
    bool _t0;
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
    return _t0;
}

// SIGNAL 8
bool DeamonInterface::readContactUpdate(Contact _t1)
{
    bool _t0;
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
    return _t0;
}

// SIGNAL 9
bool DeamonInterface::ringUpdate()
{
    bool _t0;
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
    return _t0;
}

// SIGNAL 10
bool DeamonInterface::stopRingUpdate()
{
    bool _t0;
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
    return _t0;
}

// SIGNAL 11
bool DeamonInterface::ringBackUpdate()
{
    bool _t0;
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
    return _t0;
}

// SIGNAL 12
bool DeamonInterface::callEndUpdate()
{
    bool _t0;
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
    return _t0;
}

// SIGNAL 13
bool DeamonInterface::callAnswerUpdate()
{
    bool _t0;
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
    return _t0;
}

// SIGNAL 14
bool DeamonInterface::callAcceptUpdate()
{
    bool _t0;
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
    return _t0;
}

// SIGNAL 15
bool DeamonInterface::writeContactUpdate(QString _t1)
{
    bool _t0;
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
    return _t0;
}

// SIGNAL 16
bool DeamonInterface::writeMessageUpdate(QString _t1)
{
    bool _t0;
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
    return _t0;
}

// SIGNAL 17
bool DeamonInterface::manufacturerUpdate(QString _t1)
{
    bool _t0;
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
    return _t0;
}

// SIGNAL 18
bool DeamonInterface::firmwareVersionUpdate(QString _t1)
{
    bool _t0;
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
    return _t0;
}

// SIGNAL 19
bool DeamonInterface::imeiUpdate(QString _t1)
{
    bool _t0;
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
    return _t0;
}

// SIGNAL 20
bool DeamonInterface::getSelectedNetworkModeUpdate(QString _t1)
{
    bool _t0;
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
    return _t0;
}

// SIGNAL 21
bool DeamonInterface::deviceNameUpdate(QString _t1)
{
    bool _t0;
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
    return _t0;
}

// SIGNAL 22
bool DeamonInterface::interfacePortUpdate(QString _t1)
{
    bool _t0;
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
    return _t0;
}

// SIGNAL 23
bool DeamonInterface::serialNumberUpdate(QString _t1)
{
    bool _t0;
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
    return _t0;
}

// SIGNAL 24
bool DeamonInterface::softwareVersionUpdate(QString _t1)
{
    bool _t0;
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
    return _t0;
}

// SIGNAL 25
bool DeamonInterface::hardwareVersionUpdate(QString _t1)
{
    bool _t0;
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 25, _a);
    return _t0;
}

// SIGNAL 26
bool DeamonInterface::checkBalanceUpdate(QString _t1)
{
    bool _t0;
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 26, _a);
    return _t0;
}

// SIGNAL 27
bool DeamonInterface::incorrectPinPukUpdate(QString _t1)
{
    bool _t0;
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 27, _a);
    return _t0;
}

// SIGNAL 28
bool DeamonInterface::ownNumberUpdate(QString _t1)
{
    bool _t0;
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 28, _a);
    return _t0;
}

// SIGNAL 29
bool DeamonInterface::contactCountUpdate(QString _t1, QString _t2)
{
    bool _t0;
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 29, _a);
    return _t0;
}

// SIGNAL 30
bool DeamonInterface::messageCenterNumberUpdate(QString _t1)
{
    bool _t0;
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 30, _a);
    return _t0;
}

// SIGNAL 31
bool DeamonInterface::pinCodeUpdate(QString _t1)
{
    bool _t0;
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 31, _a);
    return _t0;
}

// SIGNAL 32
bool DeamonInterface::pinQueryUpdate(QString _t1)
{
    bool _t0;
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 32, _a);
    return _t0;
}

// SIGNAL 33
bool DeamonInterface::networkNameUpdate(QString _t1)
{
    bool _t0;
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 33, _a);
    return _t0;
}

// SIGNAL 34
bool DeamonInterface::rssiUpdate(QString _t1)
{
    bool _t0;
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 34, _a);
    return _t0;
}

// SIGNAL 35
bool DeamonInterface::cellIdentifierUpdate(QString _t1)
{
    bool _t0;
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 35, _a);
    return _t0;
}

// SIGNAL 36
bool DeamonInterface::homeNetworkUpdate(QString _t1)
{
    bool _t0;
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 36, _a);
    return _t0;
}

// SIGNAL 37
bool DeamonInterface::csNetworkRegistrationUpdate(QString _t1)
{
    bool _t0;
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 37, _a);
    return _t0;
}

// SIGNAL 38
bool DeamonInterface::psNetworkRegistrationUpdate(QString _t1)
{
    bool _t0;
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 38, _a);
    return _t0;
}

// SIGNAL 39
bool DeamonInterface::psNetworkAttachmentUpdate(QString _t1)
{
    bool _t0;
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 39, _a);
    return _t0;
}

// SIGNAL 40
bool DeamonInterface::apnUpdate(QString _t1)
{
    bool _t0;
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 40, _a);
    return _t0;
}

// SIGNAL 41
bool DeamonInterface::networkSelectionModeUpdate(QString _t1)
{
    bool _t0;
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 41, _a);
    return _t0;
}

// SIGNAL 42
bool DeamonInterface::pinCodeStatusUpdate(QString _t1)
{
    bool _t0;
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 42, _a);
    return _t0;
}

// SIGNAL 43
bool DeamonInterface::pinModifyUpdate(QString _t1)
{
    bool _t0;
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 43, _a);
    return _t0;
}

// SIGNAL 44
bool DeamonInterface::accessPointNameUpdate(QString _t1)
{
    bool _t0;
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 44, _a);
    return _t0;
}

// SIGNAL 45
bool DeamonInterface::modemPlugged(bool _t1)
{
    bool _t0;
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 45, _a);
    return _t0;
}

// SIGNAL 46
bool DeamonInterface::newMessageUpdate(bool _t1)
{
    bool _t0;
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 46, _a);
    return _t0;
}

// SIGNAL 47
bool DeamonInterface::prlUpdate(QString _t1)
{
    bool _t0;
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 47, _a);
    return _t0;
}

// SIGNAL 48
bool DeamonInterface::esnUpdate(QString _t1)
{
    bool _t0;
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 48, _a);
    return _t0;
}

// SIGNAL 49
bool DeamonInterface::networkModeUpdate(QString _t1, QString _t2, QString _t3, QString _t4, QString _t5)
{
    bool _t0;
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 49, _a);
    return _t0;
}
QT_END_MOC_NAMESPACE
