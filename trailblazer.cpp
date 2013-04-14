#include "trailblazer.h"
#include <stdio.h>

#include "Slicer.h"

Layer* Slice(Mesh *mesh, double layerHeight)
{
    Layer* layer = (Layer *)malloc(sizeof(Layer));
    printf("Made it!\n");
    // construct
    //ISlicer* pSlicer = new Slicer();

    // do stuff
    //Layer layer = pSlicer->Slice(mesh, layerHeight);

    // destruct
    //delete(pSlicer);

    printf("Almost out!\n");

    return layer;
}

Path* GeneratePath(Layer* layers)
{
    return 0;
}

int Test(double testDouble)
{
    return (int) (testDouble * 2.0);
}
