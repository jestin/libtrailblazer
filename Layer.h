#ifndef LAYER_H
#define LAYER_H

#include <vector>
#include "Line.h"

typedef vector<Line> Loop;
class Layer
{
public:
    vector<Loop> loops;
};

#endif // LAYER_H
