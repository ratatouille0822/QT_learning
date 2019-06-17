/****************************************************************************
** Meta object code from reading C++ file 'chooselevel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../chooselevel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'chooselevel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ChooseLevel_t {
    QByteArrayData data[3];
    char stringdata0[35];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ChooseLevel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ChooseLevel_t qt_meta_stringdata_ChooseLevel = {
    {
QT_MOC_LITERAL(0, 0, 11), // "ChooseLevel"
QT_MOC_LITERAL(1, 12, 21), // "switch_to_main_window"
QT_MOC_LITERAL(2, 34, 0) // ""

    },
    "ChooseLevel\0switch_to_main_window\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ChooseLevel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

       0        // eod
};

void ChooseLevel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ChooseLevel *_t = static_cast<ChooseLevel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->switch_to_main_window(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ChooseLevel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ChooseLevel::switch_to_main_window)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject ChooseLevel::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_ChooseLevel.data,
      qt_meta_data_ChooseLevel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ChooseLevel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ChooseLevel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ChooseLevel.stringdata0))
        return static_cast<void*>(const_cast< ChooseLevel*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int ChooseLevel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void ChooseLevel::switch_to_main_window()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
