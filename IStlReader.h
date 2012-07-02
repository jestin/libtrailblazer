#ifndef ISTLREADER_H
#define ISTLREADER_H

#include <string>
#include <istream>
#include "Mesh.h"

using std::string;
using std::istream;

class IStlReader
{
public:
    virtual ~IStlReader() {}

    virtual Mesh ReadStl(string fileName) = 0;
    virtual Mesh ReadStl(istream& file) = 0;
};

#endif // ISTLREADER_H
