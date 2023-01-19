QT       += core gui multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    farmingdialog.cpp \
    homedialog.cpp \
    main.cpp \
    mainwindow.cpp \
    naturedialog.cpp \
    nestdialog.cpp \
    nuwaracitydialog.cpp \
    railwaydialog.cpp \
    waterfallsdialog.cpp

HEADERS += \
    farmingdialog.h \
    homedialog.h \
    mainwindow.h \
    naturedialog.h \
    nestdialog.h \
    nuwaracitydialog.h \
    railwaydialog.h \
    waterfallsdialog.h

FORMS += \
    farmingdialog.ui \
    homedialog.ui \
    mainwindow.ui \
    naturedialog.ui \
    nestdialog.ui \
    nuwaracitydialog.ui \
    railwaydialog.ui \
    waterfallsdialog.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resources/res.qrc
