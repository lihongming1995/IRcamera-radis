/****************************************************************************
** Meta object code from reading C++ file 'qtredis.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qtredis.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtredis.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QtRedis_t {
    QByteArrayData data[13];
    char stringdata[135];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtRedis_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtRedis_t qt_meta_stringdata_QtRedis = {
    {
QT_MOC_LITERAL(0, 0, 7), // "QtRedis"
QT_MOC_LITERAL(1, 8, 9), // "connected"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 12), // "disconnected"
QT_MOC_LITERAL(4, 32, 10), // "returnData"
QT_MOC_LITERAL(5, 43, 14), // "QtRedis::Reply"
QT_MOC_LITERAL(6, 58, 11), // "connectHost"
QT_MOC_LITERAL(7, 70, 4), // "host"
QT_MOC_LITERAL(8, 75, 4), // "port"
QT_MOC_LITERAL(9, 80, 14), // "disconnectHost"
QT_MOC_LITERAL(10, 95, 13), // "slotConnected"
QT_MOC_LITERAL(11, 109, 16), // "slotDisconnected"
QT_MOC_LITERAL(12, 126, 8) // "response"

    },
    "QtRedis\0connected\0\0disconnected\0"
    "returnData\0QtRedis::Reply\0connectHost\0"
    "host\0port\0disconnectHost\0slotConnected\0"
    "slotDisconnected\0response"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtRedis[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,
       3,    0,   60,    2, 0x06 /* Public */,
       4,    1,   61,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    2,   64,    2, 0x0a /* Public */,
       6,    1,   69,    2, 0x2a /* Public | MethodCloned */,
       9,    0,   72,    2, 0x0a /* Public */,
      10,    0,   73,    2, 0x08 /* Private */,
      11,    0,   74,    2, 0x08 /* Private */,
      12,    1,   75,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::UShort,    7,    8,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QVariant,    2,

       0        // eod
};

void QtRedis::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QtRedis *_t = static_cast<QtRedis *>(_o);
        switch (_id) {
        case 0: _t->connected(); break;
        case 1: _t->disconnected(); break;
        case 2: _t->returnData((*reinterpret_cast< QtRedis::Reply(*)>(_a[1]))); break;
        case 3: _t->connectHost((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const quint16(*)>(_a[2]))); break;
        case 4: _t->connectHost((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->disconnectHost(); break;
        case 6: _t->slotConnected(); break;
        case 7: _t->slotDisconnected(); break;
        case 8: _t->response((*reinterpret_cast< QVariant(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QtRedis::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QtRedis::connected)) {
                *result = 0;
            }
        }
        {
            typedef void (QtRedis::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QtRedis::disconnected)) {
                *result = 1;
            }
        }
        {
            typedef void (QtRedis::*_t)(QtRedis::Reply );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QtRedis::returnData)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject QtRedis::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QtRedis.data,
      qt_meta_data_QtRedis,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QtRedis::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtRedis::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QtRedis.stringdata))
        return static_cast<void*>(const_cast< QtRedis*>(this));
    return QObject::qt_metacast(_clname);
}

int QtRedis::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void QtRedis::connected()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void QtRedis::disconnected()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void QtRedis::returnData(QtRedis::Reply _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
