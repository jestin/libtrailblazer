#ifndef FACET_H
#define FACET_H

#include <vector>
#include "Point.h"

using std::vector;

typedef struct tagFacet
{
    Point normal;
    vector<Point> vertices;
} Facet;

#endif // FACET_H
