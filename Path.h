#ifndef PATH_H
#define PATH_H

#include "PathSegment.h"

typedef struct tagPath
{
    PathSegment** segments;
    long numSegments;
} Path;

#endif // PATH_H
