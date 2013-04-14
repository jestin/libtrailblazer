#ifndef LAYER_H
#define LAYER_H

#include <vector>
#include "Line.h"

using namespace std;

typedef vector<Line> Loop;
typedef struct tagLayer
{
    vector<Loop> loops;
} Layer;

#endif // LAYER_H
