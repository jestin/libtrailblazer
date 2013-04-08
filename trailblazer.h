#ifndef TRAILBLAZER_H
#define TRAILBLAZER_H

#include "Layer.h"
#include "Mesh.h"
#include "Path.h"

extern Layer* Slice(Mesh &mesh, double layerHeight);
extern Path* GeneratePath(Layer* layers);

#endif // TRAILBLAZER_H
