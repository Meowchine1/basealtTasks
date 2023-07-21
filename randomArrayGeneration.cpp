#include "randomArrayGeneration.h"
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <algorithm>

    RandomArrayGeneration::RandomArrayGeneration(unsigned int size)
    {
        this->size = size;
    }

    RandomArrayGeneration::~RandomArrayGeneration(){}

    void RandomArrayGeneration::print_1d(int *array)
    {
        for(unsigned i = 0; i < size; i++)
        {
            std::cout << array[i] << "\t";
        }

        return;
    }

    void RandomArrayGeneration::print_float_1d(float *array)
    {
        for(unsigned i = 0; i < size; i++)
        {
            std::cout << array[i] << "\t";
        }

        return;
    }
    void RandomArrayGeneration::print_2d(int **array)
    {

        for (unsigned i = 0; i < size; i++)
        {
            for (unsigned j = 0; j < size; j++)
            {
                 std::cout << array[i][j] << "\t";
            }
             std::cout << std::endl;
        }

        return;
    }

    int* RandomArrayGeneration::gen()
    {
        int *array = new int[size];
        auto t = time(nullptr);
        std::srand(t); // use current time as seed for random generator

        for(unsigned int i = 0; i < size; i++)
        {
            array[i] = std::rand();
        }

        return array;
    }

    int** RandomArrayGeneration::gen_2d()
    {
       std::srand(std::time(nullptr));
       unsigned int size = 10;
       int** array = new int*[size];

       for(unsigned i = 0; i < size; ++i) {
             array[i] = new int[size];
             for(unsigned j = 0; j < size; ++j) {
                array[i][j] = std::rand();
                }
            }

            return array;
        }


    float* RandomArrayGeneration::gen_sort_float()
    {
        std::srand(std::time(nullptr));
        float *array = new float[size];
        float coef = 0.3;
        for(unsigned int i = 0; i < size; i++)
        {
            array[i] = std::rand() - coef;
        }
        std::sort(array, array + size, std::greater<float>());
        return array;
    }
