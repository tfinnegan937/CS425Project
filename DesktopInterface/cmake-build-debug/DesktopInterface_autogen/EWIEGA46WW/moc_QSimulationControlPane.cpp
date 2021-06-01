/****************************************************************************
** Meta object code from reading C++ file 'QSimulationControlPane.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.11)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../QSimulationControlPane.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QSimulationControlPane.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.11. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QSimulationControlPane_t {
    QByteArrayData data[14];
    char stringdata0[171];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QSimulationControlPane_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QSimulationControlPane_t qt_meta_stringdata_QSimulationControlPane = {
    {
QT_MOC_LITERAL(0, 0, 22), // "QSimulationControlPane"
QT_MOC_LITERAL(1, 23, 9), // "simActive"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 11), // "simFinished"
QT_MOC_LITERAL(4, 46, 18), // "ipcMessageReceived"
QT_MOC_LITERAL(5, 65, 8), // "uint16_t"
QT_MOC_LITERAL(6, 74, 11), // "sendMessage"
QT_MOC_LITERAL(7, 86, 6), // "UINT16"
QT_MOC_LITERAL(8, 93, 16), // "passStatusUpdate"
QT_MOC_LITERAL(9, 110, 4), // "mess"
QT_MOC_LITERAL(10, 115, 8), // "lockPane"
QT_MOC_LITERAL(11, 124, 10), // "unlockPane"
QT_MOC_LITERAL(12, 135, 15), // "passSendMessage"
QT_MOC_LITERAL(13, 151, 19) // "receiveStatusUpdate"

    },
    "QSimulationControlPane\0simActive\0\0"
    "simFinished\0ipcMessageReceived\0uint16_t\0"
    "sendMessage\0UINT16\0passStatusUpdate\0"
    "mess\0lockPane\0unlockPane\0passSendMessage\0"
    "receiveStatusUpdate"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QSimulationControlPane[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,
       3,    0,   60,    2, 0x06 /* Public */,
       4,    1,   61,    2, 0x06 /* Public */,
       6,    1,   64,    2, 0x06 /* Public */,
       8,    1,   67,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    0,   70,    2, 0x0a /* Public */,
      11,    0,   71,    2, 0x0a /* Public */,
      12,    1,   72,    2, 0x0a /* Public */,
      13,    1,   75,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void, 0x80000000 | 7,    2,
    QMetaType::Void, QMetaType::QString,    9,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    9,
    QMetaType::Void, QMetaType::QString,    9,

       0        // eod
};

void QSimulationControlPane::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QSimulationControlPane *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->simActive(); break;
        case 1: _t->simFinished(); break;
        case 2: _t->ipcMessageReceived((*reinterpret_cast< uint16_t(*)>(_a[1]))); break;
        case 3: _t->sendMessage((*reinterpret_cast< UINT16(*)>(_a[1]))); break;
        case 4: _t->passStatusUpdate((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->lockPane(); break;
        case 6: _t->unlockPane(); break;
        case 7: _t->passSendMessage((*reinterpret_cast< UINT16(*)>(_a[1]))); break;
        case 8: _t->receiveStatusUpdate((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QSimulationControlPane::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QSimulationControlPane::simActive)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QSimulationControlPane::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QSimulationControlPane::simFinished)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QSimulationControlPane::*)(uint16_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QSimulationControlPane::ipcMessageReceived)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QSimulationControlPane::*)(UINT16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QSimulationControlPane::sendMessage)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (QSimulationControlPane::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QSimulationControlPane::passStatusUpdate)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QSimulationControlPane::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_QSimulationControlPane.data,
    qt_meta_data_QSimulationControlPane,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QSimulationControlPane::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QSimulationControlPane::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QSimulationControlPane.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QSimulationControlPane::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void QSimulationControlPane::simActive()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QSimulationControlPane::simFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QSimulationControlPane::ipcMessageReceived(uint16_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QSimulationControlPane::sendMessage(UINT16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QSimulationControlPane::passStatusUpdate(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
