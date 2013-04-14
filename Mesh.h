#ifndef MESH_H
#define MESH_H

#include <vector>
#include "Facet.h"

using std::vector;

typedef struct tagMesh
{
    vector<Facet> facets;
} Mesh;

#endif // MESH_H
