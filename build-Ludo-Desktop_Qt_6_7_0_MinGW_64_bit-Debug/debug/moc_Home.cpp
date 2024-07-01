/****************************************************************************
** Meta object code from reading C++ file 'Home.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Ludo/Home.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Home.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSHomeENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSHomeENDCLASS = QtMocHelpers::stringData(
    "Home",
    "typeChanged",
    "",
    "Player::Type",
    "type",
    "pawnSelected",
    "Pawn*",
    "pawn",
    "setType",
    "insertPawn",
    "removePawn",
    "reset",
    "handleClick"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSHomeENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       1,   73, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   56,    2, 0x06,    2 /* Public */,
       5,    1,   59,    2, 0x06,    4 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       8,    1,   62,    2, 0x0a,    6 /* Public */,
       9,    1,   65,    2, 0x0a,    8 /* Public */,
      10,    1,   68,    2, 0x0a,   10 /* Public */,
      11,    0,   71,    2, 0x0a,   12 /* Public */,
      12,    0,   72,    2, 0x08,   13 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       4, 0x80000000 | 3, 0x0001510b, uint(0), 0,

       0        // eod
};

Q_CONSTINIT static const QMetaObject::SuperData qt_meta_extradata_CLASSHomeENDCLASS[] = {
    QMetaObject::SuperData::link<Player::staticMetaObject>(),
    nullptr
};

Q_CONSTINIT const QMetaObject Home::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSHomeENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSHomeENDCLASS,
    qt_static_metacall,
    qt_meta_extradata_CLASSHomeENDCLASS,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSHomeENDCLASS_t,
        // property 'type'
        QtPrivate::TypeAndForceComplete<Player::Type, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Home, std::true_type>,
        // method 'typeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Player::Type, std::false_type>,
        // method 'pawnSelected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Pawn *, std::false_type>,
        // method 'setType'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Player::Type, std::false_type>,
        // method 'insertPawn'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Pawn *, std::false_type>,
        // method 'removePawn'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Pawn *, std::false_type>,
        // method 'reset'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'handleClick'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Home::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Home *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->typeChanged((*reinterpret_cast< std::add_pointer_t<Player::Type>>(_a[1]))); break;
        case 1: _t->pawnSelected((*reinterpret_cast< std::add_pointer_t<Pawn*>>(_a[1]))); break;
        case 2: _t->setType((*reinterpret_cast< std::add_pointer_t<Player::Type>>(_a[1]))); break;
        case 3: _t->insertPawn((*reinterpret_cast< std::add_pointer_t<Pawn*>>(_a[1]))); break;
        case 4: _t->removePawn((*reinterpret_cast< std::add_pointer_t<Pawn*>>(_a[1]))); break;
        case 5: _t->reset(); break;
        case 6: _t->handleClick(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Home::*)(Player::Type );
            if (_t _q_method = &Home::typeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Home::*)(Pawn * );
            if (_t _q_method = &Home::pawnSelected; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Home *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Player::Type*>(_v) = _t->type(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<Home *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setType(*reinterpret_cast< Player::Type*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *Home::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Home::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSHomeENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Home::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void Home::typeChanged(Player::Type _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Home::pawnSelected(Pawn * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
