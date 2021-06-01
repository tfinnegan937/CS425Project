/****************************************************************************
** Meta object code from reading C++ file 'QPatientDataPane.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.11)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../QPatientDataPane.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QPatientDataPane.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.11. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QGenderPicker_t {
    QByteArrayData data[1];
    char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QGenderPicker_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QGenderPicker_t qt_meta_stringdata_QGenderPicker = {
    {
QT_MOC_LITERAL(0, 0, 13) // "QGenderPicker"

    },
    "QGenderPicker"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGenderPicker[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void QGenderPicker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QGenderPicker::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_QGenderPicker.data,
    qt_meta_data_QGenderPicker,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QGenderPicker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGenderPicker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QGenderPicker.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QGenderPicker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QDatePicker_t {
    QByteArrayData data[7];
    char stringdata0[69];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QDatePicker_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QDatePicker_t qt_meta_stringdata_QDatePicker = {
    {
QT_MOC_LITERAL(0, 0, 11), // "QDatePicker"
QT_MOC_LITERAL(1, 12, 11), // "confirmDate"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 10), // "updateDate"
QT_MOC_LITERAL(4, 36, 4), // "date"
QT_MOC_LITERAL(5, 41, 12), // "openSelector"
QT_MOC_LITERAL(6, 54, 14) // "passDateSignal"

    },
    "QDatePicker\0confirmDate\0\0updateDate\0"
    "date\0openSelector\0passDateSignal"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QDatePicker[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   37,    2, 0x0a /* Public */,
       5,    0,   40,    2, 0x0a /* Public */,
       6,    0,   41,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QDate,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QDate,    4,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QDatePicker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QDatePicker *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->confirmDate((*reinterpret_cast< QDate(*)>(_a[1]))); break;
        case 1: _t->updateDate((*reinterpret_cast< QDate(*)>(_a[1]))); break;
        case 2: _t->openSelector(); break;
        case 3: _t->passDateSignal(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QDatePicker::*)(QDate );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDatePicker::confirmDate)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QDatePicker::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_QDatePicker.data,
    qt_meta_data_QDatePicker,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QDatePicker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QDatePicker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QDatePicker.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QDatePicker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void QDatePicker::confirmDate(QDate _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_QConcussionPicker_t {
    QByteArrayData data[1];
    char stringdata0[18];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QConcussionPicker_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QConcussionPicker_t qt_meta_stringdata_QConcussionPicker = {
    {
QT_MOC_LITERAL(0, 0, 17) // "QConcussionPicker"

    },
    "QConcussionPicker"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QConcussionPicker[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void QConcussionPicker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QConcussionPicker::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_QConcussionPicker.data,
    qt_meta_data_QConcussionPicker,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QConcussionPicker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QConcussionPicker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QConcussionPicker.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QConcussionPicker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QPatientDataPane_t {
    QByteArrayData data[5];
    char stringdata0[61];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QPatientDataPane_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QPatientDataPane_t qt_meta_stringdata_QPatientDataPane = {
    {
QT_MOC_LITERAL(0, 0, 16), // "QPatientDataPane"
QT_MOC_LITERAL(1, 17, 22), // "UpdatePatientDataPanes"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 11), // "PatientData"
QT_MOC_LITERAL(4, 53, 7) // "current"

    },
    "QPatientDataPane\0UpdatePatientDataPanes\0"
    "\0PatientData\0current"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QPatientDataPane[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void QPatientDataPane::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QPatientDataPane *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->UpdatePatientDataPanes((*reinterpret_cast< PatientData(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QPatientDataPane::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_QPatientDataPane.data,
    qt_meta_data_QPatientDataPane,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QPatientDataPane::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QPatientDataPane::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QPatientDataPane.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QPatientDataPane::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
