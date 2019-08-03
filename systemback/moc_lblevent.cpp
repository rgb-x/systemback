/****************************************************************************
** Meta object code from reading C++ file 'lblevent.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "lblevent.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'lblevent.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_lblevent_t {
    QByteArrayData data[9];
    char stringdata0[101];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_lblevent_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_lblevent_t qt_meta_stringdata_lblevent = {
    {
QT_MOC_LITERAL(0, 0, 8), // "lblevent"
QT_MOC_LITERAL(1, 9, 14), // "Mouse_Released"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 14), // "Mouse_DblClick"
QT_MOC_LITERAL(4, 40, 13), // "Mouse_Pressed"
QT_MOC_LITERAL(5, 54, 11), // "Mouse_Click"
QT_MOC_LITERAL(6, 66, 11), // "Mouse_Enter"
QT_MOC_LITERAL(7, 78, 11), // "Mouse_Leave"
QT_MOC_LITERAL(8, 90, 10) // "Mouse_Move"

    },
    "lblevent\0Mouse_Released\0\0Mouse_DblClick\0"
    "Mouse_Pressed\0Mouse_Click\0Mouse_Enter\0"
    "Mouse_Leave\0Mouse_Move"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_lblevent[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    0,   50,    2, 0x06 /* Public */,
       4,    0,   51,    2, 0x06 /* Public */,
       5,    0,   52,    2, 0x06 /* Public */,
       6,    0,   53,    2, 0x06 /* Public */,
       7,    0,   54,    2, 0x06 /* Public */,
       8,    0,   55,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void lblevent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        lblevent *_t = static_cast<lblevent *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->Mouse_Released(); break;
        case 1: _t->Mouse_DblClick(); break;
        case 2: _t->Mouse_Pressed(); break;
        case 3: _t->Mouse_Click(); break;
        case 4: _t->Mouse_Enter(); break;
        case 5: _t->Mouse_Leave(); break;
        case 6: _t->Mouse_Move(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (lblevent::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&lblevent::Mouse_Released)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (lblevent::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&lblevent::Mouse_DblClick)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (lblevent::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&lblevent::Mouse_Pressed)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (lblevent::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&lblevent::Mouse_Click)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (lblevent::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&lblevent::Mouse_Enter)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (lblevent::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&lblevent::Mouse_Leave)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (lblevent::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&lblevent::Mouse_Move)) {
                *result = 6;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject lblevent::staticMetaObject = {
    { &QLabel::staticMetaObject, qt_meta_stringdata_lblevent.data,
      qt_meta_data_lblevent,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *lblevent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *lblevent::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_lblevent.stringdata0))
        return static_cast<void*>(this);
    return QLabel::qt_metacast(_clname);
}

int lblevent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void lblevent::Mouse_Released()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void lblevent::Mouse_DblClick()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void lblevent::Mouse_Pressed()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void lblevent::Mouse_Click()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void lblevent::Mouse_Enter()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void lblevent::Mouse_Leave()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void lblevent::Mouse_Move()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
