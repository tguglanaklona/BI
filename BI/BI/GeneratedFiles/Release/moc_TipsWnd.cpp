/****************************************************************************
** Meta object code from reading C++ file 'TipsWnd.h'
**
** Created: Thu 23. Aug 13:40:38 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../TipsWnd.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TipsWnd.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TipsWnd[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       9,    8,    8,    8, 0x0a,
      38,    8,    8,    8, 0x0a,
      69,    8,    8,    8, 0x0a,
     111,    8,    8,    8, 0x0a,
     138,    8,    8,    8, 0x0a,
     173,    8,    8,    8, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_TipsWnd[] = {
    "TipsWnd\0\0sndFrameDst_changeValue(int)\0"
    "ballRadius_changeValue(double)\0"
    "ballRecognitionRadius_changeValue(double)\0"
    "holeWidth_changeValue(int)\0"
    "colorDiscountCheckBox_checked(int)\0"
    "interBallGapCheckBox_checked(int)\0"
};

const QMetaObject TipsWnd::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_TipsWnd,
      qt_meta_data_TipsWnd, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TipsWnd::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TipsWnd::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TipsWnd::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TipsWnd))
        return static_cast<void*>(const_cast< TipsWnd*>(this));
    return QWidget::qt_metacast(_clname);
}

int TipsWnd::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: sndFrameDst_changeValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: ballRadius_changeValue((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: ballRecognitionRadius_changeValue((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: holeWidth_changeValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: colorDiscountCheckBox_checked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: interBallGapCheckBox_checked((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
