QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Dice.cpp \
    Error_Handeling.cpp \
    Game.cpp \
    Prime_Number.cpp \
    Randomiser.cpp \
    Team.cpp \
    game_options.cpp \
    main.cpp \
    maingame.cpp \
    mainmenu.cpp \
    team_select.cpp \
    wincondition.cpp

HEADERS += \
    Dice.h \
    Error_Handeling.h \
    Game.h \
    Prime_Number.h \
    Randomiser.h \
    Team.h \
    game_options.h \
    maingame.h \
    mainmenu.h \
    team_select.h \
    wincondition.h

FORMS += \
    game_options.ui \
    maingame.ui \
    mainmenu.ui \
    team_select.ui \
    wincondition.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
