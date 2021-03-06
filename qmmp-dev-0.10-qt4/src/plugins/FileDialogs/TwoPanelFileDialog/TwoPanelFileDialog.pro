include(../../plugins.pri)

INCLUDEPATH += ../../../../src

TARGET =$$PLUGINS_PREFIX/FileDialogs/twopanelfiledialog


HEADERS += twopanelfiledialog.h \
           twopanelfiledialogimpl.h

SOURCES += twopanelfiledialog.cpp \
           twopanelfiledialogimpl.cpp


FORMS += twopanelfiledialog.ui

CONFIG += warn_on plugin

TEMPLATE = lib

QMAKE_LIBDIR += ../../../../lib

RESOURCES += translations/translations.qrc

unix {
    isEmpty(LIB_DIR){
        LIB_DIR = /lib
    }
    target.path = $$LIB_DIR/qmmp/FileDialogs
    INSTALLS += target

    QMAKE_CLEAN =$$PLUGINS_PREFIX/FileDialogs/libtwopanelfiledialog.so
    LIBS += -lqmmpui -lqmmp
}

win32 {
    LIBS += -lqmmpui0 -lqmmp0
    QMAKE_LIBDIR += ../../../../bin
}
