# ----------------------------------------------------
# This file is generated by the Qt Visual Studio Add-in.
# ------------------------------------------------------

# This is a reminder that you are using a generated .pro file.
# Remove it when you are finished editing this file.
message("You are running qmake on a generated .pro file. This may not work!")

TEMPLATE = lib

 CONFIG += debug_and_release

 CONFIG(debug, debug|release) {
     TARGET = CatchInputCtrld
 } else {
     TARGET = CatchInputCtrl
 }

DESTDIR = ../../../../Qt/2010.04/qt/plugins/designer
QT += core gui sql qtmain designer
CONFIG += qtestlib designer plugin
DEFINES += QT_LARGEFILE_SUPPORT QT_SQL_LIB
INCLUDEPATH += ./GeneratedFiles \
    ./GeneratedFiles/Debug \
    .
DEPENDPATH += .
MOC_DIR += ./GeneratedFiles/debug
OBJECTS_DIR += debug
UI_DIR += ./GeneratedFiles
RCC_DIR += ./GeneratedFiles
include(CatchInputCtrl.pri)

#Install the plugin in the designer plugins directory.
target.path = $$[QT_INSTALL_PLUGINS]/designer
INSTALLS += target
