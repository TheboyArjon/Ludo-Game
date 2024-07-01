/****************************************************************************
** Meta object code from reading C++ file 'Status.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Status.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Status.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSStatusENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSStatusENDCLASS = QtMocHelpers::stringData(
    "Status",
    "typeChanged",
    "",
    "Player::Type",
    "type",
    "turnChanged",
    "turn",
    "pawnInserted",
    "Pawn*",
    "pawn",
    "setType",
    "setTurn",
    "insertPawn",
    "reset",
    "updateStatus"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSStatusENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       2,   82, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   62,    2, 0x06,    3 /* Public */,
       5,    1,   65,    2, 0x06,    5 /* Public */,
       7,    1,   68,    2, 0x06,    7 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      10,    1,   71,    2, 0x0a,    9 /* Public */,
      11,    1,   74,    2, 0x0a,   11 /* Public */,
      12,    1,   77,    2, 0x0a,   13 /* Public */,
      13,    0,   80,    2, 0x0a,   15 /* Public */,
      14,    0,   81,    2, 0x08,   16 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, 0x80000000 | 8,    9,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       4, 0x80000000 | 3, 0x0001510b, uint(0), 0,
       6, QMetaType::Bool, 0x00015103, uint(1), 0,

       0        // eod
};

Q_CONSTINIT static const QMetaObject::SuperData qt_meta_extradata_CLASSStatusENDCLASS[] = {
    QMetaObject::SuperData::link<Player::staticMetaObject>(),
    nullptr
};

Q_CONSTINIT const QMetaObject Status::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSStatusENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSStatusENDCLASS,
    qt_static_metacall,
    qt_meta_extradata_CLASSStatusENDCLASS,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSStatusENDCLASS_t,
        // property 'type'
        QtPrivate::TypeAndForceComplete<Player::Type, std::true_type>,
        // property 'turn'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Status, std::true_type>,
        // method 'typeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Player::Type, std::false_type>,
        // method 'turnChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'pawnInserted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Pawn *, std::false_type>,
        // method 'setType'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Player::Type, std::false_type>,
        // method 'setTurn'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'insertPawn'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Pawn *, std::false_type>,
        // method 'reset'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateStatus'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Status::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Status *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->typeChanged((*reinterpret_cast< std::add_pointer_t<Player::Type>>(_a[1]))); break;
        case 1: _t->turnChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 2: _t->pawnInserted((*reinterpret_cast< std::add_pointer_t<Pawn*>>(_a[1]))); break;
        case 3: _t->setType((*reinterpret_cast< std::add_pointer_t<Player::Type>>(_a[1]))); break;
        case 4: _t->setTurn((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 5: _t->insertPawn((*reinterpret_cast< std::add_pointer_t<Pawn*>>(_a[1]))); break;
        case 6: _t->reset(); break;
        case 7: _t->updateStatus(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Status::*)(Player::Type );
            if (_t _q_method = &Status::typeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Status::*)(bool );
            if (_t _q_method = &Status::turnChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Status::*)(Pawn * );
            if (_t _q_method = &Status::pawnInserted; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Status *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Player::Type*>(_v) = _t->type(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->isTurn(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<Status *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setType(*reinterpret_cast< Player::Type*>(_v)); break;
        case 1: _t->setTurn(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *Status::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Status::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSStatusENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Status::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void Status::typeChanged(Player::Type _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Status::turnChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Status::pawnInserted(Pawn * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
