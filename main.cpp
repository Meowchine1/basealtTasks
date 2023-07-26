#include <iostream>
#include <graph.h>
#include "tasks.h"
#include <string>
#include <filesystem>
namespace fs = std::filesystem;
void printLine()
{
    for(int i = 0; i < 70; i++)
    {
        std::cout<<"_";
    }
    std::cout<<std::endl;
}

int main(int argc, char *argv[])
{

//    std::cout <<"Задание 1\n";
//    task1();
//    printLine();
//    std::cout <<"Задание 2\n";
//    task2();
//    printLine();
//    std::cout <<"Задание 3\n";
//    task3();
//    printLine();
//    std::cout <<"Задание 4\n";
//    task4();
//    printLine();
//    std::cout <<"Задание 5\n";
//    task5();
//    printLine();
//    std::cout <<"Задание 6\n";
//    task6();
//    std::cout<<std::endl;
//    printLine();
//    printLine();

//    generator.~RandomArrayGeneration();

//    printLine();
//    printLine();

//    Graph graph;
//    std::string path = fs::current_path()
//            .append("../basealtTest/graph.txt");
//    graph.readTxt(path);

    Graph<char> example_graph {{
        {'A', {'B'}},
        {'B', {'A', 'C', 'D'}},
        {'C', {'A'}},
        {'D', {'E', 'A'}},
        {'E', {'B'}}
      }};

}
