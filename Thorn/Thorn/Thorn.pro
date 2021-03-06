#-------------------------------------------------
#
# Project created by QtCreator 2018-08-29T11:03:17
#
#-------------------------------------------------

QT       += core gui widgets webenginewidgets

TARGET = Thorn
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        main.cpp \
    InsertDialogs/InsertListDialog.cpp \
    CodeEditor.cpp \
    File/ThornFile.cpp \
    File/MarkupPreprocessor.cpp \
    File/MarkupHighlighter.cpp \
    MainWindow.cpp \
    File/CharacterManager.cpp \
    Widgets/FlowLayout.cpp

HEADERS += \
    InsertDialogs/InsertListDialog.h \
    File/MarkupHighlighter.h \
    File/MarkupPreprocessor.h \
    File/ThornFile.h \
    CodeEditor.h \
    MainWindow.h \
    File/CharacterManager.h \
    Widgets/FlowLayout.h

FORMS += \
    MainWindow.ui \
    InsertDialogs/InsertListDialog.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
win32:RC_ICONS += ../../icons/thorn/app_icon.ico

DISTFILES +=

RESOURCES += \
    characters.qrc \
    tlell.qrc
