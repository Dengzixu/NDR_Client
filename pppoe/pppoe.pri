INCLUDEPATH += $$PWD
DEPENDPATH += $$PWD

HEADERS +=  $$PWD/basedsl.h \
            $$PWD/pppoe.h

SOURCES +=  $$PWD/pppoe.cpp

win32{
    SOURCES += $$PWD/basedsl_win.cpp
    LIBS    +=  -luser32 \
                -lrasapi32
}
unix:!macx {
    SOURCES += $$PWD/basedsl_linux.cpp
    LIBS    += -lX11
}
macx{
    SOURCES += $$PWD/basedsl_mac.cpp
    LIBS += -framework SystemConfiguration \
            -framework CoreFoundation \
            -framework Security -framework Carbon
}
