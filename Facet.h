#ifndef FACET_H
#define FACET_H

#include "Point.h"

using std::vector;

typedef struct tagFacet
{
    Point normal;
    Point** vertices;
    long numVertices;
} Facet;

#endif // FACET_H
