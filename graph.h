#ifndef GRAPH_H
#define GRAPH_H
#include "string"
#include "map"

class Graph
{
private:
    std::map<char, std::map<char, char>> graphNodes;
public:
    Graph();
    void readTxt(std::string filePath);

};

#endif // GRAPH_H
