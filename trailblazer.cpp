#include "trailblazer.h"

#include "Slicer.h"

Layer Slice(Mesh &mesh, double layerHeight)
{
    // construct
    ISlicer* pSlicer = new Slicer();

    // do stuff
    Layer layer = pSlicer->Slice(mesh, layerHeight);

    // destruct
    delete(pSlicer);

    return layer;
}

Path* GeneratePath(Layer* layers)
{
    return 0;
}
