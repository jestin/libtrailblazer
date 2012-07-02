#ifndef FACET_H
#define FACET_H

#include <vector>
#include "Point.h"

class Facet
{
public:
    Point normal;
    vector<Point> vertices;
};

#endif // FACET_H
