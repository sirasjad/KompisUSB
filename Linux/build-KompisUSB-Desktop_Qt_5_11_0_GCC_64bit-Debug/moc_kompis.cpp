/****************************************************************************
** Meta object code from reading C++ file 'kompis.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../kompis.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kompis.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Kompis_t {
    QByteArrayData data[8];
    char stringdata0[167];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Kompis_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Kompis_t qt_meta_stringdata_Kompis = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Kompis"
QT_MOC_LITERAL(1, 7, 22), // "on_startKompis_clicked"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 30), // "on_checkbox_install_ec_toggled"
QT_MOC_LITERAL(4, 62, 7), // "checked"
QT_MOC_LITERAL(5, 70, 32), // "on_checkbox_uninstall_ec_toggled"
QT_MOC_LITERAL(6, 103, 30), // "on_checkbox_install_mb_toggled"
QT_MOC_LITERAL(7, 134, 32) // "on_checkbox_uninstall_mb_toggled"

    },
    "Kompis\0on_startKompis_clicked\0\0"
    "on_checkbox_install_ec_toggled\0checked\0"
    "on_checkbox_uninstall_ec_toggled\0"
    "on_checkbox_install_mb_toggled\0"
    "on_checkbox_uninstall_mb_toggled"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Kompis[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x08 /* Private */,
       3,    1,   40,    2, 0x08 /* Private */,
       5,    1,   43,    2, 0x08 /* Private */,
       6,    1,   46,    2, 0x08 /* Private */,
       7,    1,   49,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::Bool,    4,

       0        // eod
};

void Kompis::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Kompis *_t = static_cast<Kompis *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_startKompis_clicked(); break;
        case 1: _t->on_checkbox_install_ec_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->on_checkbox_uninstall_ec_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->on_checkbox_install_mb_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->on_checkbox_uninstall_mb_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Kompis::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Kompis.data,
      qt_meta_data_Kompis,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Kompis::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Kompis::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Kompis.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Kompis::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
