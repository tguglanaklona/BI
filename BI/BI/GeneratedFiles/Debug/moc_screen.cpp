/****************************************************************************
** Meta object code from reading C++ file 'screen.h'
**
** Created: Wed 31. Oct 20:38:00 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../screen.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'screen.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Screenshot[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x08,
      28,   11,   11,   11, 0x08,
      50,   11,   45,   11, 0x08,
      67,   11,   45,   11, 0x08,
      91,   11,   11,   11, 0x08,
     105,   11,   11,   11, 0x08,
     122,   11,   11,   11, 0x08,
     144,   11,   11,   11, 0x08,
     165,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Screenshot[] = {
    "Screenshot\0\0newScreenshot()\0"
    "saveScreenshot()\0bool\0loadScreenshot()\0"
    "loadDefaultScreenshot()\0shootScreen()\0"
    "updateCheckBox()\0righthalfScreenshot()\0"
    "lefthalfScreenshot()\0process()\0"
};

const QMetaObject Screenshot::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Screenshot,
      qt_meta_data_Screenshot, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Screenshot::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Screenshot::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Screenshot::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Screenshot))
        return static_cast<void*>(const_cast< Screenshot*>(this));
    return QWidget::qt_metacast(_clname);
}

int Screenshot::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: newScreenshot(); break;
        case 1: saveScreenshot(); break;
        case 2: { bool _r = loadScreenshot();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: { bool _r = loadDefaultScreenshot();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: shootScreen(); break;
        case 5: updateCheckBox(); break;
        case 6: righthalfScreenshot(); break;
        case 7: lefthalfScreenshot(); break;
        case 8: process(); break;
        default: ;
        }
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
