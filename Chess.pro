TEMPLATE = app
TARGET = Chess

QT = core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

SOURCES += \
    main.cpp \
    Board.cpp \
    MoveChecking.cpp \
    Pieces.cpp

HEADERS += \
    chessBoard.h \
    Board.h \
    MoveChecking.h \
    Pieces.h

