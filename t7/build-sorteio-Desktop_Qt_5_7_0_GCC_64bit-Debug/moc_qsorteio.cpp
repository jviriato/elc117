/****************************************************************************
** Meta object code from reading C++ file 'qsorteio.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../sorteio/qsorteio.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qsorteio.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QSorteio_t {
    QByteArrayData data[18];
    char stringdata0[207];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QSorteio_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QSorteio_t qt_meta_stringdata_QSorteio = {
    {
QT_MOC_LITERAL(0, 0, 8), // "QSorteio"
QT_MOC_LITERAL(1, 9, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 23), // "on_lineEdit_textChanged"
QT_MOC_LITERAL(4, 56, 4), // "arg1"
QT_MOC_LITERAL(5, 61, 11), // "validaTexto"
QT_MOC_LITERAL(6, 73, 1), // "i"
QT_MOC_LITERAL(7, 75, 9), // "criaArray"
QT_MOC_LITERAL(8, 85, 16), // "std::vector<int>"
QT_MOC_LITERAL(9, 102, 13), // "participantes"
QT_MOC_LITERAL(10, 116, 12), // "shuffleArray"
QT_MOC_LITERAL(11, 129, 17), // "std::vector<int>&"
QT_MOC_LITERAL(12, 147, 1), // "p"
QT_MOC_LITERAL(13, 149, 12), // "escreveTexto"
QT_MOC_LITERAL(14, 162, 6), // "numero"
QT_MOC_LITERAL(15, 169, 14), // "mostraGanhador"
QT_MOC_LITERAL(16, 184, 16), // "on_RESET_clicked"
QT_MOC_LITERAL(17, 201, 5) // "reset"

    },
    "QSorteio\0on_pushButton_clicked\0\0"
    "on_lineEdit_textChanged\0arg1\0validaTexto\0"
    "i\0criaArray\0std::vector<int>\0participantes\0"
    "shuffleArray\0std::vector<int>&\0p\0"
    "escreveTexto\0numero\0mostraGanhador\0"
    "on_RESET_clicked\0reset"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QSorteio[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x08 /* Private */,
       3,    1,   60,    2, 0x08 /* Private */,
       5,    2,   63,    2, 0x08 /* Private */,
       7,    1,   68,    2, 0x08 /* Private */,
      10,    1,   71,    2, 0x08 /* Private */,
      13,    1,   74,    2, 0x08 /* Private */,
      15,    1,   77,    2, 0x08 /* Private */,
      16,    0,   80,    2, 0x08 /* Private */,
      17,    0,   81,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    4,    6,
    0x80000000 | 8, QMetaType::Int,    9,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QSorteio::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QSorteio *_t = static_cast<QSorteio *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_clicked(); break;
        case 1: _t->on_lineEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->validaTexto((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: { std::vector<int> _r = _t->criaArray((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< std::vector<int>*>(_a[0]) = _r; }  break;
        case 4: _t->shuffleArray((*reinterpret_cast< std::vector<int>(*)>(_a[1]))); break;
        case 5: _t->escreveTexto((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->mostraGanhador((*reinterpret_cast< std::vector<int>(*)>(_a[1]))); break;
        case 7: _t->on_RESET_clicked(); break;
        case 8: _t->reset(); break;
        default: ;
        }
    }
}

const QMetaObject QSorteio::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_QSorteio.data,
      qt_meta_data_QSorteio,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QSorteio::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QSorteio::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QSorteio.stringdata0))
        return static_cast<void*>(const_cast< QSorteio*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int QSorteio::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
