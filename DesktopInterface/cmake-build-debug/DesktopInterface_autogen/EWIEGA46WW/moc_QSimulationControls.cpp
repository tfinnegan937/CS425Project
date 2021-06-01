/****************************************************************************
** Meta object code from reading C++ file 'QSimulationControls.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.11)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../QSimulationControls.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QSimulationControls.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.11. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QSimulationControlButtonWidget_t {
    QByteArrayData data[9];
    char stringdata0[117];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QSimulationControlButtonWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QSimulationControlButtonWidget_t qt_meta_stringdata_QSimulationControlButtonWidget = {
    {
QT_MOC_LITERAL(0, 0, 30), // "QSimulationControlButtonWidget"
QT_MOC_LITERAL(1, 31, 11), // "beginSignal"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 12), // "cancelSignal"
QT_MOC_LITERAL(4, 57, 11), // "sendMessage"
QT_MOC_LITERAL(5, 69, 6), // "UINT16"
QT_MOC_LITERAL(6, 76, 12), // "beginPressed"
QT_MOC_LITERAL(7, 89, 13), // "cancelPressed"
QT_MOC_LITERAL(8, 103, 13) // "toggleButtons"

    },
    "QSimulationControlButtonWidget\0"
    "beginSignal\0\0cancelSignal\0sendMessage\0"
    "UINT16\0beginPressed\0cancelPressed\0"
    "toggleButtons"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QSimulationControlButtonWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    0,   45,    2, 0x06 /* Public */,
       4,    1,   46,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   49,    2, 0x0a /* Public */,
       7,    0,   50,    2, 0x0a /* Public */,
       8,    0,   51,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QSimulationControlButtonWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QSimulationControlButtonWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->beginSignal(); break;
        case 1: _t->cancelSignal(); break;
        case 2: _t->sendMessage((*reinterpret_cast< UINT16(*)>(_a[1]))); break;
        case 3: _t->beginPressed(); break;
        case 4: _t->cancelPressed(); break;
        case 5: _t->toggleButtons(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QSimulationControlButtonWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QSimulationControlButtonWidget::beginSignal)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QSimulationControlButtonWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QSimulationControlButtonWidget::cancelSignal)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QSimulationControlButtonWidget::*)(UINT16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QSimulationControlButtonWidget::sendMessage)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QSimulationControlButtonWidget::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_QSimulationControlButtonWidget.data,
    qt_meta_data_QSimulationControlButtonWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QSimulationControlButtonWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QSimulationControlButtonWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QSimulationControlButtonWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QSimulationControlButtonWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void QSimulationControlButtonWidget::beginSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QSimulationControlButtonWidget::cancelSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QSimulationControlButtonWidget::sendMessage(UINT16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
struct qt_meta_stringdata_QSimulationControls_t {
    QByteArrayData data[14];
    char stringdata0[160];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QSimulationControls_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QSimulationControls_t qt_meta_stringdata_QSimulationControls = {
    {
QT_MOC_LITERAL(0, 0, 19), // "QSimulationControls"
QT_MOC_LITERAL(1, 20, 9), // "simActive"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 11), // "simFinished"
QT_MOC_LITERAL(4, 43, 11), // "sendMessage"
QT_MOC_LITERAL(5, 55, 6), // "UINT16"
QT_MOC_LITERAL(6, 62, 8), // "lockPane"
QT_MOC_LITERAL(7, 71, 10), // "unlockPane"
QT_MOC_LITERAL(8, 82, 9), // "selectAll"
QT_MOC_LITERAL(9, 92, 5), // "state"
QT_MOC_LITERAL(10, 98, 20), // "passBeginSignalToIPC"
QT_MOC_LITERAL(11, 119, 15), // "passSendMessage"
QT_MOC_LITERAL(12, 135, 4), // "mess"
QT_MOC_LITERAL(13, 140, 19) // "updateStatusMessage"

    },
    "QSimulationControls\0simActive\0\0"
    "simFinished\0sendMessage\0UINT16\0lockPane\0"
    "unlockPane\0selectAll\0state\0"
    "passBeginSignalToIPC\0passSendMessage\0"
    "mess\0updateStatusMessage"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QSimulationControls[] = {

 // content:
       8,       // revision
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
       6,    0,   64,    2, 0x0a /* Public */,
       7,    0,   65,    2, 0x0a /* Public */,
       8,    1,   66,    2, 0x0a /* Public */,
      10,    0,   69,    2, 0x0a /* Public */,
      11,    1,   70,    2, 0x0a /* Public */,
      13,    1,   73,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,   12,
    QMetaType::Void, QMetaType::QString,   12,

       0        // eod
};

void QSimulationControls::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QSimulationControls *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->simActive(); break;
        case 1: _t->simFinished(); break;
        case 2: _t->sendMessage((*reinterpret_cast< UINT16(*)>(_a[1]))); break;
        case 3: _t->lockPane(); break;
        case 4: _t->unlockPane(); break;
        case 5: _t->selectAll((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->passBeginSignalToIPC(); break;
        case 7: _t->passSendMessage((*reinterpret_cast< UINT16(*)>(_a[1]))); break;
        case 8: _t->updateStatusMessage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QSimulationControls::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QSimulationControls::simActive)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QSimulationControls::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QSimulationControls::simFinished)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QSimulationControls::*)(UINT16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QSimulationControls::sendMessage)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QSimulationControls::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_QSimulationControls.data,
    qt_meta_data_QSimulationControls,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QSimulationControls::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QSimulationControls::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QSimulationControls.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QSimulationControls::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void QSimulationControls::simActive()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QSimulationControls::simFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QSimulationControls::sendMessage(UINT16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
