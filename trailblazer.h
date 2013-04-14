#ifndef TRAILBLAZER_H
#define TRAILBLAZER_H

#include "Layer.h"
#include "Mesh.h"
#include "Path.h"

extern "C" Layer* Slice(Mesh *mesh, double layerHeight);
extern "C" Path* GeneratePath(Layer* layers);
extern "C" int Test(double testDouble);

#endif // TRAILBLAZER_H
