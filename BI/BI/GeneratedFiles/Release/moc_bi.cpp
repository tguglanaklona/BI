/****************************************************************************
** Meta object code from reading C++ file 'bi.h'
**
** Created: Thu 23. Aug 13:40:36 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../bi.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bi.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_BI[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       4,    3,    3,    3, 0x08,
      27,    3,    3,    3, 0x08,
      58,    3,    3,    3, 0x08,
      86,    3,    3,    3, 0x08,
     115,    3,    3,    3, 0x08,
     142,    3,    3,    3, 0x08,
     172,    3,    3,    3, 0x08,
     198,    3,    3,    3, 0x08,
     232,    3,    3,    3, 0x08,
     259,    3,    3,    3, 0x08,
     295,    3,    3,    3, 0x08,
     326,    3,    3,    3, 0x08,
     362,    3,    3,    3, 0x08,
     384,    3,    3,    3, 0x08,
     417,    3,    3,    3, 0x08,
     451,    3,    3,    3, 0x08,
     489,    3,    3,    3, 0x08,
     530,    3,    3,    3, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_BI[] = {
    "BI\0\0tipsButton_onClicked()\0"
    "saveSettingsButton_onClicked()\0"
    "whiteBallButton_onClicked()\0"
    "victimBallButton_onClicked()\0"
    "stepBallButton_onClicked()\0"
    "sndStepBallButton_onClicked()\0"
    "discardButton_onClicked()\0"
    "obstructionBallButton_onClicked()\0"
    "allBallsButton_onClicked()\0"
    "clearObstructionsButton_onClicked()\0"
    "choosePocketButton_onClicked()\0"
    "chooseClearPocketButton_onClicked()\0"
    "cueButton_onClicked()\0"
    "screenAnalysisButton_onClicked()\0"
    "manualModeRadioButton_onChecked()\0"
    "semimanualModeRadioButton_onChecked()\0"
    "semiautomaticModeRadioButton_onChecked()\0"
    "settingsSpinBox_onChanged()\0"
};

const QMetaObject BI::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_BI,
      qt_meta_data_BI, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &BI::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *BI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *BI::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BI))
        return static_cast<void*>(const_cast< BI*>(this));
    return QDialog::qt_metacast(_clname);
}

int BI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: tipsButton_onClicked(); break;
        case 1: saveSettingsButton_onClicked(); break;
        case 2: whiteBallButton_onClicked(); break;
        case 3: victimBallButton_onClicked(); break;
        case 4: stepBallButton_onClicked(); break;
        case 5: sndStepBallButton_onClicked(); break;
        case 6: discardButton_onClicked(); break;
        case 7: obstructionBallButton_onClicked(); break;
        case 8: allBallsButton_onClicked(); break;
        case 9: clearObstructionsButton_onClicked(); break;
        case 10: choosePocketButton_onClicked(); break;
        case 11: chooseClearPocketButton_onClicked(); break;
        case 12: cueButton_onClicked(); break;
        case 13: screenAnalysisButton_onClicked(); break;
        case 14: manualModeRadioButton_onChecked(); break;
        case 15: semimanualModeRadioButton_onChecked(); break;
        case 16: semiautomaticModeRadioButton_onChecked(); break;
        case 17: settingsSpinBox_onChanged(); break;
        default: ;
        }
        _id -= 18;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
