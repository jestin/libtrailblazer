#ifndef SLICER_H
#define SLICER_H

#include "ISlicer.h"

#include"cgaldefs.h"

class Slicer : public ISlicer
{
public:
    Slicer();
    virtual Layer* Slice(Mesh *mesh, double layerHeight);

private:
    Polyhedron ConvertToPolyhedron(Mesh *mesh);
    Layer* ConvertSegmentsToLayer(std::list<Segment> segments);
};

#endif // SLICER_H
