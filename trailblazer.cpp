#include "trailblazer.h"

#include "Slicer.h"

Layer* Slice(Mesh &mesh, double layerHeight)
{
    ISlicer* slicer = new Slicer();
    return slicer->Slice(mesh, layerHeight);
}

Path* GeneratePath(Layer* layers)
{
    return 0;
}
