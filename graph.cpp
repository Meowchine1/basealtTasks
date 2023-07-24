#include "graph.h"
#include <iostream>
#include <fstream>
#include <string>
Graph::Graph()
{

}
void Graph::readTxt(std::string filePath)
{
    std::string line;
    char separator = ' ';
    int i;
        std::ifstream in(filePath);
        if (in.is_open())
        {
            i = 0;
            while (std::getline(in, line, separator))
            {

               std::cout<<line<<"\t";
               i = 0;

            }
        }
        in.close();
        return;
}
