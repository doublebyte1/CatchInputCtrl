/****************************************************************************
** Meta object code from reading C++ file 'catchinputctrlplugin.h'
**
<<<<<<< HEAD
** Created: Sun 5. Jun 23:32:09 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
=======
** Created: Wed 15. Jun 13:41:19 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
>>>>>>> e0cf93c176758f5c65b0c8010c145c51e3fafaa9
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../catchinputctrlplugin.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'catchinputctrlplugin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CatchInputCtrlPlugin[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_CatchInputCtrlPlugin[] = {
    "CatchInputCtrlPlugin\0"
};

const QMetaObject CatchInputCtrlPlugin::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CatchInputCtrlPlugin,
      qt_meta_data_CatchInputCtrlPlugin, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CatchInputCtrlPlugin::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CatchInputCtrlPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CatchInputCtrlPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CatchInputCtrlPlugin))
        return static_cast<void*>(const_cast< CatchInputCtrlPlugin*>(this));
    if (!strcmp(_clname, "QDesignerCustomWidgetInterface"))
        return static_cast< QDesignerCustomWidgetInterface*>(const_cast< CatchInputCtrlPlugin*>(this));
    if (!strcmp(_clname, "com.trolltech.Qt.Designer.CustomWidget"))
        return static_cast< QDesignerCustomWidgetInterface*>(const_cast< CatchInputCtrlPlugin*>(this));
    return QObject::qt_metacast(_clname);
}

int CatchInputCtrlPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
