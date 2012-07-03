#include "StlReader.h"

#include <iostream>
#include <fstream>

using namespace std;

StlReader::StlReader()
{
}

StlReader::~StlReader()
{
}

Mesh StlReader::ReadStl(string fileName)
{
    ifstream infile;
    infile.open((char *)fileName.c_str(), ifstream::in);
    Mesh mesh = ReadStl(infile);
    infile.close();
    return mesh;
}

Mesh StlReader::ReadStl(istream& file)
{
    Mesh a;
    return a;
}

Mesh StlReader::CreateMeshFromAsciiStl(istream& file)
{
    Mesh a;
    return a;
}

Mesh StlReader::CreateMeshFromBinaryStl(istream& file)
{
    Mesh a;
    return a;
}
