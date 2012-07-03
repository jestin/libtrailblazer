#ifndef STLREADER_H
#define STLREADER_H

#include "IStlReader.h"

class StlReader : public IStlReader
{
public:
    StlReader();
    virtual ~StlReader();

    virtual Mesh ReadStl(string fileName);
    virtual Mesh ReadStl(istream& file);

    virtual Mesh CreateMeshFromAsciiStl(istream& file);
    virtual Mesh CreateMeshFromBinaryStl(istream& file);
};

#endif // STLREADER_H
