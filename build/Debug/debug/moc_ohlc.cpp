/****************************************************************************
** Meta object code from reading C++ file 'ohlc.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../ohlc.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ohlc.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_OHLC_t {
    QByteArrayData data[7];
    char stringdata0[130];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OHLC_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OHLC_t qt_meta_stringdata_OHLC = {
    {
QT_MOC_LITERAL(0, 0, 4), // "OHLC"
QT_MOC_LITERAL(1, 5, 24), // "on_actionPlot1_triggered"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 24), // "on_actionPlot2_triggered"
QT_MOC_LITERAL(4, 56, 24), // "on_actionPlot3_triggered"
QT_MOC_LITERAL(5, 81, 25), // "on_actionRtPlot_triggered"
QT_MOC_LITERAL(6, 107, 22) // "on_actionPlt_triggered"

    },
    "OHLC\0on_actionPlot1_triggered\0\0"
    "on_actionPlot2_triggered\0"
    "on_actionPlot3_triggered\0"
    "on_actionRtPlot_triggered\0"
    "on_actionPlt_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OHLC[] = {

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
       3,    0,   40,    2, 0x08 /* Private */,
       4,    0,   41,    2, 0x08 /* Private */,
       5,    0,   42,    2, 0x08 /* Private */,
       6,    0,   43,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void OHLC::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        OHLC *_t = static_cast<OHLC *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_actionPlot1_triggered(); break;
        case 1: _t->on_actionPlot2_triggered(); break;
        case 2: _t->on_actionPlot3_triggered(); break;
        case 3: _t->on_actionRtPlot_triggered(); break;
        case 4: _t->on_actionPlt_triggered(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject OHLC::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_OHLC.data,
      qt_meta_data_OHLC,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OHLC::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OHLC::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OHLC.stringdata0))
        return static_cast<void*>(const_cast< OHLC*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int OHLC::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE
