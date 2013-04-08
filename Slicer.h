#ifndef SLICER_H
#define SLICER_H

#include "ISlicer.h"

class Slicer : public ISlicer
{
public:
    Slicer();
    virtual Layer* Slice(Mesh &mesh, double layerHeight);
};

#endif // SLICER_H
