/****************************************************************************
** Meta object code from reading C++ file 'Ludo.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Ludo.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Ludo.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSLudoENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSLudoENDCLASS = QtMocHelpers::stringData(
    "Ludo",
    "countChanged",
    "",
    "count",
    "actionChanged",
    "Ludo::Action",
    "action",
    "turnEnded",
    "gameOver",
    "Player*",
    "player",
    "reset",
    "changeMode",
    "QAction*",
    "setAction",
    "showAbout",
    "showGameOver",
    "handleRoll",
    "n",
    "handleAction",
    "switchPlayer",
    "movePawnFromHome",
    "Pawn*",
    "pawn",
    "returnPawnToHome",
    "movePawnOnTrack",
    "movePawnToStatus",
    "Action",
    "Roll",
    "Move"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSLudoENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       1,  150, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  110,    2, 0x06,    2 /* Public */,
       4,    1,  113,    2, 0x06,    4 /* Public */,
       7,    0,  116,    2, 0x06,    6 /* Public */,
       8,    1,  117,    2, 0x06,    7 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      11,    0,  120,    2, 0x0a,    9 /* Public */,
      12,    1,  121,    2, 0x08,   10 /* Private */,
      14,    1,  124,    2, 0x08,   12 /* Private */,
      15,    0,  127,    2, 0x08,   14 /* Private */,
      16,    1,  128,    2, 0x08,   15 /* Private */,
      17,    1,  131,    2, 0x08,   17 /* Private */,
      19,    1,  134,    2, 0x08,   19 /* Private */,
      20,    0,  137,    2, 0x08,   21 /* Private */,
      21,    1,  138,    2, 0x08,   22 /* Private */,
      24,    1,  141,    2, 0x08,   24 /* Private */,
      25,    1,  144,    2, 0x08,   26 /* Private */,
      26,    1,  147,    2, 0x08,   28 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 13,    6,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, QMetaType::Int,   18,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 22,   23,
    QMetaType::Void, 0x80000000 | 22,   23,
    QMetaType::Void, 0x80000000 | 22,   23,
    QMetaType::Void, 0x80000000 | 22,   23,

 // enums: name, alias, flags, count, data
      27,   27, 0x0,    2,  155,

 // enum data: key, value
      28, uint(Ludo::Roll),
      29, uint(Ludo::Move),

       0        // eod
};

Q_CONSTINIT const QMetaObject Ludo::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSLudoENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSLudoENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSLudoENDCLASS_t,
        // enum 'Action'
        QtPrivate::TypeAndForceComplete<Ludo::Action, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Ludo, std::true_type>,
        // method 'countChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'actionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Ludo::Action, std::false_type>,
        // method 'turnEnded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'gameOver'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Player *, std::false_type>,
        // method 'reset'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'changeMode'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAction *, std::false_type>,
        // method 'setAction'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Ludo::Action, std::false_type>,
        // method 'showAbout'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showGameOver'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Player *, std::false_type>,
        // method 'handleRoll'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'handleAction'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Ludo::Action, std::false_type>,
        // method 'switchPlayer'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'movePawnFromHome'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Pawn *, std::false_type>,
        // method 'returnPawnToHome'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Pawn *, std::false_type>,
        // method 'movePawnOnTrack'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Pawn *, std::false_type>,
        // method 'movePawnToStatus'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Pawn *, std::false_type>
    >,
    nullptr
} };

void Ludo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Ludo *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->countChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->actionChanged((*reinterpret_cast< std::add_pointer_t<Ludo::Action>>(_a[1]))); break;
        case 2: _t->turnEnded(); break;
        case 3: _t->gameOver((*reinterpret_cast< std::add_pointer_t<Player*>>(_a[1]))); break;
        case 4: _t->reset(); break;
        case 5: _t->changeMode((*reinterpret_cast< std::add_pointer_t<QAction*>>(_a[1]))); break;
        case 6: _t->setAction((*reinterpret_cast< std::add_pointer_t<Ludo::Action>>(_a[1]))); break;
        case 7: _t->showAbout(); break;
        case 8: _t->showGameOver((*reinterpret_cast< std::add_pointer_t<Player*>>(_a[1]))); break;
        case 9: _t->handleRoll((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 10: _t->handleAction((*reinterpret_cast< std::add_pointer_t<Ludo::Action>>(_a[1]))); break;
        case 11: _t->switchPlayer(); break;
        case 12: _t->movePawnFromHome((*reinterpret_cast< std::add_pointer_t<Pawn*>>(_a[1]))); break;
        case 13: _t->returnPawnToHome((*reinterpret_cast< std::add_pointer_t<Pawn*>>(_a[1]))); break;
        case 14: _t->movePawnOnTrack((*reinterpret_cast< std::add_pointer_t<Pawn*>>(_a[1]))); break;
        case 15: _t->movePawnToStatus((*reinterpret_cast< std::add_pointer_t<Pawn*>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAction* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Ludo::*)(int );
            if (_t _q_method = &Ludo::countChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Ludo::*)(Ludo::Action );
            if (_t _q_method = &Ludo::actionChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Ludo::*)();
            if (_t _q_method = &Ludo::turnEnded; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Ludo::*)(Player * );
            if (_t _q_method = &Ludo::gameOver; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject *Ludo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Ludo::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSLudoENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Ludo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void Ludo::countChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Ludo::actionChanged(Ludo::Action _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Ludo::turnEnded()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Ludo::gameOver(Player * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
