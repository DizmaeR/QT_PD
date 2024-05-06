/****************************************************************************
** Meta object code from reading C++ file 'radiowindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../radiowindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'radiowindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_RadioWindow_t {
    QByteArrayData data[12];
    char stringdata0[216];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RadioWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RadioWindow_t qt_meta_stringdata_RadioWindow = {
    {
QT_MOC_LITERAL(0, 0, 11), // "RadioWindow"
QT_MOC_LITERAL(1, 12, 11), // "firstWindow"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 21), // "on_homeButton_clicked"
QT_MOC_LITERAL(4, 47, 11), // "jazz_button"
QT_MOC_LITERAL(5, 59, 21), // "on_jazzButton_clicked"
QT_MOC_LITERAL(6, 81, 20), // "on_popButton_clicked"
QT_MOC_LITERAL(7, 102, 21), // "on_rockButton_clicked"
QT_MOC_LITERAL(8, 124, 22), // "on_rRollButton_clicked"
QT_MOC_LITERAL(9, 147, 24), // "on_classicButton_clicked"
QT_MOC_LITERAL(10, 172, 20), // "on_RnbButton_clicked"
QT_MOC_LITERAL(11, 193, 22) // "on_pauseButton_clicked"

    },
    "RadioWindow\0firstWindow\0\0on_homeButton_clicked\0"
    "jazz_button\0on_jazzButton_clicked\0"
    "on_popButton_clicked\0on_rockButton_clicked\0"
    "on_rRollButton_clicked\0on_classicButton_clicked\0"
    "on_RnbButton_clicked\0on_pauseButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RadioWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   65,    2, 0x08 /* Private */,
       4,    0,   66,    2, 0x08 /* Private */,
       5,    0,   67,    2, 0x08 /* Private */,
       6,    0,   68,    2, 0x08 /* Private */,
       7,    0,   69,    2, 0x08 /* Private */,
       8,    0,   70,    2, 0x08 /* Private */,
       9,    0,   71,    2, 0x08 /* Private */,
      10,    0,   72,    2, 0x08 /* Private */,
      11,    0,   73,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void RadioWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RadioWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->firstWindow(); break;
        case 1: _t->on_homeButton_clicked(); break;
        case 2: _t->jazz_button(); break;
        case 3: _t->on_jazzButton_clicked(); break;
        case 4: _t->on_popButton_clicked(); break;
        case 5: _t->on_rockButton_clicked(); break;
        case 6: _t->on_rRollButton_clicked(); break;
        case 7: _t->on_classicButton_clicked(); break;
        case 8: _t->on_RnbButton_clicked(); break;
        case 9: _t->on_pauseButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (RadioWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RadioWindow::firstWindow)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject RadioWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_RadioWindow.data,
    qt_meta_data_RadioWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *RadioWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RadioWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RadioWindow.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int RadioWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void RadioWindow::firstWindow()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
