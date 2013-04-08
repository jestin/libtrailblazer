#ifndef ISLICER_H
#define ISLICER_H

#include "Layer.h"
#include "Mesh.h"

class ISlicer
{
public:
    virtual ~ISlicer() {}
    virtual Layer* Slice(Mesh &mesh, double layerHeight) = 0;
};

#endif // ISLICER_H
