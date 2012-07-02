#ifndef MESH_H
#define MESH_H

#include <vector>
#include "Facet.h"

using std::vector;

class Mesh
{
public:
    vector<Facet> facets;
};

#endif // MESH_H
