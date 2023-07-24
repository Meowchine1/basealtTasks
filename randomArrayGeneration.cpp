#include "randomArrayGeneration.h"
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <algorithm>
#include <vector>

    RandomArrayGeneration::RandomArrayGeneration(unsigned int size)
    {
        this->size = size;
    }

    RandomArrayGeneration::~RandomArrayGeneration(){
        std::cout<<"delete\n";
    }

    std::vector<int> RandomArrayGeneration::getRandomInt()
    {
        std::srand(std::time(nullptr));
        std::vector<int> array;

        for(unsigned int i = 0; i < size; i++)
        {
            array.push_back(std::rand() % divider);
        }
        intVectorCollection.push_back(array);
        return array;
    }

    std::vector<std::vector<int>> RandomArrayGeneration::getRandomTwoDimensionalIntArray()
    {
       std::srand(std::time(nullptr));
       std::vector<std::vector<int>> array(size, std::vector<int>(size));

       for (std::vector<int>& row : array)
         {
          for(int i = 0; i < size; i++)
          {
              row[i] = std::rand() % divider; // Заполнение значениями
          }

         }

       twoDimensionalArrayCollection.push_back(array);
       return array;
    }

     std::vector<float> RandomArrayGeneration::getRandomSortedFloat()
    {
        std::srand(std::time(nullptr));
        std::vector<float> array;
        for(unsigned int i = 0; i < size; i++)
        {
            array.push_back((float)(std::rand()  % divider - coef));
        }
        std::sort(array.begin(), array.end(), std::greater<float>());
        floatVectorCollection.push_back(array);
        return array;
    }

    void RandomArrayGeneration::print_1d(std::vector<int> array)
    {
        for(unsigned i = 0; i < size; i++)
        {
            std::cout << array.at(i) << "\t";
        }

        return;
    }

    void RandomArrayGeneration::print_float_1d(std::vector<float> array)
    {
        for(unsigned i = 0; i < size; i++)
        {
            std::cout << array.at(i) << "\t";
        }

        return;
    }
    void RandomArrayGeneration::print_2d(std::vector<std::vector<int>> array)
    {
        for(auto row : array)
        {
            for(auto column : row)
            {
                std::cout << column << "\t";
            }
            std::cout << std::endl;
        }
        return;
    }
