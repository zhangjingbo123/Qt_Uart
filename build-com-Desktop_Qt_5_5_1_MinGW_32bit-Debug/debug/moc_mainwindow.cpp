/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../com/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[16];
    char stringdata0[250];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 15), // "onNewSerialPort"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 20), // "Check_Serial_Dynamic"
QT_MOC_LITERAL(4, 49, 17), // "Update_Com_Serial"
QT_MOC_LITERAL(5, 67, 18), // "on_OpenCom_clicked"
QT_MOC_LITERAL(6, 86, 18), // "on_ClearRX_clicked"
QT_MOC_LITERAL(7, 105, 20), // "on_clearsend_clicked"
QT_MOC_LITERAL(8, 126, 19), // "on_senddata_clicked"
QT_MOC_LITERAL(9, 146, 23), // "on_AdvancedOpen_clicked"
QT_MOC_LITERAL(10, 170, 13), // "Upate_ComPara"
QT_MOC_LITERAL(11, 184, 9), // "ComPara_t"
QT_MOC_LITERAL(12, 194, 13), // "Update_ComSum"
QT_MOC_LITERAL(13, 208, 8), // "ChangeBD"
QT_MOC_LITERAL(14, 217, 15), // "DecideToAddTime"
QT_MOC_LITERAL(15, 233, 16) // "DecideToChange16"

    },
    "MainWindow\0onNewSerialPort\0\0"
    "Check_Serial_Dynamic\0Update_Com_Serial\0"
    "on_OpenCom_clicked\0on_ClearRX_clicked\0"
    "on_clearsend_clicked\0on_senddata_clicked\0"
    "on_AdvancedOpen_clicked\0Upate_ComPara\0"
    "ComPara_t\0Update_ComSum\0ChangeBD\0"
    "DecideToAddTime\0DecideToChange16"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   82,    2, 0x0a /* Public */,
       4,    1,   83,    2, 0x0a /* Public */,
       5,    0,   86,    2, 0x0a /* Public */,
       6,    0,   87,    2, 0x0a /* Public */,
       7,    0,   88,    2, 0x0a /* Public */,
       8,    0,   89,    2, 0x0a /* Public */,
       9,    0,   90,    2, 0x0a /* Public */,
      10,    1,   91,    2, 0x0a /* Public */,
      12,    1,   94,    2, 0x0a /* Public */,
      13,    0,   97,    2, 0x0a /* Public */,
      14,    1,   98,    2, 0x0a /* Public */,
      15,    1,  101,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QStringList,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QStringList,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onNewSerialPort((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 1: _t->Check_Serial_Dynamic(); break;
        case 2: _t->Update_Com_Serial((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 3: _t->on_OpenCom_clicked(); break;
        case 4: _t->on_ClearRX_clicked(); break;
        case 5: _t->on_clearsend_clicked(); break;
        case 6: _t->on_senddata_clicked(); break;
        case 7: _t->on_AdvancedOpen_clicked(); break;
        case 8: _t->Upate_ComPara((*reinterpret_cast< ComPara_t(*)>(_a[1]))); break;
        case 9: _t->Update_ComSum((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: _t->ChangeBD(); break;
        case 11: _t->DecideToAddTime((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->DecideToChange16((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MainWindow::*_t)(QStringList );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::onNewSerialPort)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::onNewSerialPort(QStringList _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
