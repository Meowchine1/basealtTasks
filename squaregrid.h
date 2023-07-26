#ifndef SQUAREGRID_H
#define SQUAREGRID_H
#include "tuple"
class SquareGrid
{

private:
    typedef std::tuple<int, int> Location;
    int width, height;

public:   
    SquareGrid(int width_, int height_);
};

#endif // SQUAREGRID_H
