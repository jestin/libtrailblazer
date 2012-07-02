#ifndef STLREADER_H
#define STLREADER_H

#include "IStlReader.h"

class StlReader : public IStlReader
{
public:
    StlReader();
    Mesh ReadStl(string fileName);
    Mesh ReadStl(istream file);
};

#endif // STLREADER_H
