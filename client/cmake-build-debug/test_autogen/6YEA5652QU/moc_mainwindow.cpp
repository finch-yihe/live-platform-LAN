/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../include/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[24];
    char stringdata0[294];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 9), // "send_gift"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 4), // "gift"
QT_MOC_LITERAL(4, 27, 8), // "recv_msg"
QT_MOC_LITERAL(5, 36, 12), // "accept_error"
QT_MOC_LITERAL(6, 49, 28), // "QAbstractSocket::SocketError"
QT_MOC_LITERAL(7, 78, 14), // "send_chat_data"
QT_MOC_LITERAL(8, 93, 17), // "join_in_chat_room"
QT_MOC_LITERAL(9, 111, 11), // "QModelIndex"
QT_MOC_LITERAL(10, 123, 5), // "index"
QT_MOC_LITERAL(11, 129, 16), // "create_chat_room"
QT_MOC_LITERAL(12, 146, 14), // "send_quit_info"
QT_MOC_LITERAL(13, 161, 19), // "change_play_channel"
QT_MOC_LITERAL(14, 181, 15), // "recv_video_data"
QT_MOC_LITERAL(15, 197, 6), // "top_up"
QT_MOC_LITERAL(16, 204, 12), // "show_parters"
QT_MOC_LITERAL(17, 217, 11), // "send_flower"
QT_MOC_LITERAL(18, 229, 11), // "send_pepper"
QT_MOC_LITERAL(19, 241, 9), // "send_like"
QT_MOC_LITERAL(20, 251, 11), // "send_rocket"
QT_MOC_LITERAL(21, 263, 9), // "recv_gift"
QT_MOC_LITERAL(22, 273, 14), // "change_barrage"
QT_MOC_LITERAL(23, 288, 5) // "state"

    },
    "MainWindow\0send_gift\0\0gift\0recv_msg\0"
    "accept_error\0QAbstractSocket::SocketError\0"
    "send_chat_data\0join_in_chat_room\0"
    "QModelIndex\0index\0create_chat_room\0"
    "send_quit_info\0change_play_channel\0"
    "recv_video_data\0top_up\0show_parters\0"
    "send_flower\0send_pepper\0send_like\0"
    "send_rocket\0recv_gift\0change_barrage\0"
    "state"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   99,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,  102,    2, 0x08 /* Private */,
       5,    1,  103,    2, 0x08 /* Private */,
       7,    0,  106,    2, 0x08 /* Private */,
       8,    1,  107,    2, 0x08 /* Private */,
      11,    0,  110,    2, 0x08 /* Private */,
      12,    0,  111,    2, 0x08 /* Private */,
      13,    0,  112,    2, 0x08 /* Private */,
      14,    0,  113,    2, 0x08 /* Private */,
      15,    0,  114,    2, 0x08 /* Private */,
      16,    1,  115,    2, 0x08 /* Private */,
      17,    0,  118,    2, 0x08 /* Private */,
      18,    0,  119,    2, 0x08 /* Private */,
      19,    0,  120,    2, 0x08 /* Private */,
      20,    0,  121,    2, 0x08 /* Private */,
      21,    1,  122,    2, 0x08 /* Private */,
      22,    1,  125,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,   23,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->send_gift((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->recv_msg(); break;
        case 2: _t->accept_error((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        case 3: _t->send_chat_data(); break;
        case 4: _t->join_in_chat_room((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        case 5: _t->create_chat_room(); break;
        case 6: _t->send_quit_info(); break;
        case 7: _t->change_play_channel(); break;
        case 8: _t->recv_video_data(); break;
        case 9: _t->top_up(); break;
        case 10: _t->show_parters((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->send_flower(); break;
        case 12: _t->send_pepper(); break;
        case 13: _t->send_like(); break;
        case 14: _t->send_rocket(); break;
        case 15: _t->recv_gift((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->change_barrage((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketError >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainWindow::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::send_gift)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::send_gift(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
