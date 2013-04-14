#ifndef PATHSEGMENT_H
#define PATHSEGMENT_H

#include "Line.h"

typedef struct tagPathSegment
{
    Line segment;
    int speed;

    int extrusionSpeed;
    double extrusionVolume;
} PathSegment;

#endif // PATHSEGMENT_H
