/****************************************************************************
** Meta object code from reading C++ file 'widgetmusic.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../widgetmusic.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'widgetmusic.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WidgetMusic_t {
    QByteArrayData data[9];
    char stringdata0[170];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WidgetMusic_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WidgetMusic_t qt_meta_stringdata_WidgetMusic = {
    {
QT_MOC_LITERAL(0, 0, 11), // "WidgetMusic"
QT_MOC_LITERAL(1, 12, 21), // "on_jazzButton_clicked"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 20), // "on_popButton_clicked"
QT_MOC_LITERAL(4, 56, 21), // "on_rockButton_clicked"
QT_MOC_LITERAL(5, 78, 22), // "on_rRollButton_clicked"
QT_MOC_LITERAL(6, 101, 24), // "on_classicButton_clicked"
QT_MOC_LITERAL(7, 126, 20), // "on_RnbButton_clicked"
QT_MOC_LITERAL(8, 147, 22) // "on_pauseButton_clicked"

    },
    "WidgetMusic\0on_jazzButton_clicked\0\0"
    "on_popButton_clicked\0on_rockButton_clicked\0"
    "on_rRollButton_clicked\0on_classicButton_clicked\0"
    "on_RnbButton_clicked\0on_pauseButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WidgetMusic[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    0,   52,    2, 0x08 /* Private */,
       6,    0,   53,    2, 0x08 /* Private */,
       7,    0,   54,    2, 0x08 /* Private */,
       8,    0,   55,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void WidgetMusic::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WidgetMusic *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_jazzButton_clicked(); break;
        case 1: _t->on_popButton_clicked(); break;
        case 2: _t->on_rockButton_clicked(); break;
        case 3: _t->on_rRollButton_clicked(); break;
        case 4: _t->on_classicButton_clicked(); break;
        case 5: _t->on_RnbButton_clicked(); break;
        case 6: _t->on_pauseButton_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject WidgetMusic::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_WidgetMusic.data,
    qt_meta_data_WidgetMusic,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WidgetMusic::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WidgetMusic::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WidgetMusic.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int WidgetMusic::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
