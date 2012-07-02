TEMPLATE = app
CONFIG += console
CONFIG -= qt

SOURCES += \
    StlReader.cpp

HEADERS += \
    Point.h \
    Line.h \
    PathSegment.h \
    Path.h \
    Facet.h \
    Layer.h \
    Mesh.h \
    IStlReader.h \
    StlReader.h

