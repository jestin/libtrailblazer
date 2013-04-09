#include "trailblazer.h"

#include "Slicer.h"

Layer Slice(Mesh &mesh, double layerHeight)
{
    ISlicer* pSlicer = new Slicer();
    Layer layer = pSlicer->Slice(mesh, layerHeight);
    delete(pSlicer);

    return layer;
}

Path* GeneratePath(Layer* layers)
{
    return 0;
}
