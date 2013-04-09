#include "trailblazer.h"

#include "Slicer.h"

Layer* Slice(Mesh &mesh, double layerHeight)
{
    ISlicer* pSlicer = new Slicer();
    Layer* pLayer = pSlicer->Slice(mesh, layerHeight);
    delete(pSlicer);

    return pLayer;
}

Path* GeneratePath(Layer* layers)
{
    return 0;
}
