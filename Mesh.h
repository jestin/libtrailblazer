#ifndef MESH_H
#define MESH_H

#include "Facet.h"

using std::vector;

typedef struct tagMesh
{
    Facet** facets;
    long numFacets;
} Mesh;

#endif // MESH_H
