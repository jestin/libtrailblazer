#ifndef PATH_H
#define PATH_H

#include <vector>
#include "PathSegment.h"

typedef struct tagPath
{
    vector<PathSegment> segments;
} Path;

#endif // PATH_H
