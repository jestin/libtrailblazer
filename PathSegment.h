#ifndef PATHSEGMENT_H
#define PATHSEGMENT_H

#include "Line.h"

class PathSegment
{
public:
    Line segment;
    int speed;

    int extrusionSpeed;
    double extrusionVolume;
};

#endif // PATHSEGMENT_H
