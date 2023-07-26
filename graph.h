#ifndef GRAPH_H
#define GRAPH_H
#include "string"
#include "map"
#include "vector"
template<class L>
class Graph
{
public:
    typedef L Location;
    typedef typename std::vector<Location>::iterator iterator;
    std::map<Location, std::vector<Location>> edges;
    void readTxt(std::string filePath);
    inline const std::vector<Location>  neighbors(Location id);

};

#endif // GRAPH_H
