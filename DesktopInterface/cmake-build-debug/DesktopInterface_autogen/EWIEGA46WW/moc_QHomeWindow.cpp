/****************************************************************************
** Meta object code from reading C++ file 'QHomeWindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.11)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../QHomeWindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QHomeWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.11. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QHomeWindow_t {
    QByteArrayData data[19];
    char stringdata0[239];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QHomeWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QHomeWindow_t qt_meta_stringdata_QHomeWindow = {
    {
QT_MOC_LITERAL(0, 0, 11), // "QHomeWindow"
QT_MOC_LITERAL(1, 12, 9), // "simActive"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 11), // "simFinished"
QT_MOC_LITERAL(4, 35, 12), // "testFinished"
QT_MOC_LITERAL(5, 48, 15), // "EyeTests::Tests"
QT_MOC_LITERAL(6, 64, 6), // "testID"
QT_MOC_LITERAL(7, 71, 16), // "FullPatientData&"
QT_MOC_LITERAL(8, 88, 20), // "current_patient_data"
QT_MOC_LITERAL(9, 109, 14), // "updateVRStatus"
QT_MOC_LITERAL(10, 124, 4), // "mess"
QT_MOC_LITERAL(11, 129, 17), // "patientDataLoaded"
QT_MOC_LITERAL(12, 147, 11), // "PatientData"
QT_MOC_LITERAL(13, 159, 6), // "object"
QT_MOC_LITERAL(14, 166, 25), // "patientBaselineDataLoaded"
QT_MOC_LITERAL(15, 192, 7), // "ipcTick"
QT_MOC_LITERAL(16, 200, 11), // "sendMessage"
QT_MOC_LITERAL(17, 212, 6), // "UINT16"
QT_MOC_LITERAL(18, 219, 19) // "updateSymptomScores"

    },
    "QHomeWindow\0simActive\0\0simFinished\0"
    "testFinished\0EyeTests::Tests\0testID\0"
    "FullPatientData&\0current_patient_data\0"
    "updateVRStatus\0mess\0patientDataLoaded\0"
    "PatientData\0object\0patientBaselineDataLoaded\0"
    "ipcTick\0sendMessage\0UINT16\0"
    "updateSymptomScores"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QHomeWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,
       3,    0,   60,    2, 0x06 /* Public */,
       4,    2,   61,    2, 0x06 /* Public */,
       9,    1,   66,    2, 0x06 /* Public */,
      11,    1,   69,    2, 0x06 /* Public */,
      14,    1,   72,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      15,    0,   75,    2, 0x0a /* Public */,
      16,    1,   76,    2, 0x0a /* Public */,
      18,    0,   79,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 7,    6,    8,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, 0x80000000 | 12,   13,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 17,   10,
    QMetaType::Void,

       0        // eod
};

void QHomeWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QHomeWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->simActive(); break;
        case 1: _t->simFinished(); break;
        case 2: _t->testFinished((*reinterpret_cast< EyeTests::Tests(*)>(_a[1])),(*reinterpret_cast< FullPatientData(*)>(_a[2]))); break;
        case 3: _t->updateVRStatus((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->patientDataLoaded((*reinterpret_cast< PatientData(*)>(_a[1]))); break;
        case 5: _t->patientBaselineDataLoaded((*reinterpret_cast< PatientData(*)>(_a[1]))); break;
        case 6: _t->ipcTick(); break;
        case 7: _t->sendMessage((*reinterpret_cast< UINT16(*)>(_a[1]))); break;
        case 8: _t->updateSymptomScores(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QHomeWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QHomeWindow::simActive)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QHomeWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QHomeWindow::simFinished)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QHomeWindow::*)(EyeTests::Tests , FullPatientData & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QHomeWindow::testFinished)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QHomeWindow::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QHomeWindow::updateVRStatus)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (QHomeWindow::*)(PatientData );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QHomeWindow::patientDataLoaded)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (QHomeWindow::*)(PatientData );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QHomeWindow::patientBaselineDataLoaded)) {
                *result = 5;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QHomeWindow::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_QHomeWindow.data,
    qt_meta_data_QHomeWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QHomeWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QHomeWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QHomeWindow.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QHomeWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void QHomeWindow::simActive()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QHomeWindow::simFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QHomeWindow::testFinished(EyeTests::Tests _t1, FullPatientData & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QHomeWindow::updateVRStatus(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QHomeWindow::patientDataLoaded(PatientData _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QHomeWindow::patientBaselineDataLoaded(PatientData _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
