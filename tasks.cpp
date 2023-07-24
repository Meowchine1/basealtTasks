#include <map>
#include <set>
#include "vector"
#include "iostream"
#include "tasks.h"

unsigned int size = 6;
RandomArrayGeneration generator(size);

// минимум в 1d массиве целых циклом for
void task1()
{
    std::vector<int> array = generator.getRandomInt();
    std::cout << "Одномерный массив" << std::endl;
    generator.print_1d(array);

    int array_min = array[0];


    for (int i = 1; i < size; i++)
    {
        if(array_min > array[i])
        {
            array_min = array[i];
        }
    }
    std::cout << "\nМинимальное число в массиве целых чисел = " << array_min << "\n\n";
}


// максимум в 1d массиве целых циклом while
void task2()
{
    std::vector<int> array = generator.getRandomInt();
    std::cout << "Одномерный массив" << std::endl;
    generator.print_1d(array);

    int i = 1;
    int array_max = array[0];
    while (i < size)
    {
        if (array[i] > array_max)
        {
            array_max = array[i];
        }
        i++;
    }
    std::cout << "\nМаксимальное число в массиве целых чисел = " << array_max << "\n\n";
}

//максимум в отсорированном массиве вещественных
void task3()
{
    std::cout <<"Массив вещественных чисел:\n";
    std::vector<float> array_f = generator.getRandomSortedFloat();
    generator.print_float_1d(array_f);
    std::cout <<"\n"<< std::endl;
    std::cout<<"Максимальное число в отсортированном массиве вещ. чисел = " << array_f.at(0) << std::endl;

}

// максимум в двумерном массиве целых
void task4()
{
    std::cout << "Двумерный массив:" << std::endl;
    std::vector<std::vector<int>> array_2d = generator.getRandomTwoDimensionalIntArray();
    generator.print_2d(array_2d);
    int max_2d = array_2d[0][0];
    for(int i = 0; i < size; i++)
       {
           for(int j = 0; j < size; j++)
           {
               if(array_2d[i][j] > max_2d)
               {
                   max_2d = array_2d[i][j];
               }
           }
       }

    std::cout << "Максимальное число в двумерном массиве целых чисел = " << max_2d << "\n" <<std::endl;
}


// выбраь из 2d массива целых чисел те, которые делятся на 3,
// а затем из выбранных те, что делятся еще и на 7.
void task5()
{
    std::cout << "Двумерный массив:\n";
    std::vector<std::vector<int>> array_2d = generator.getRandomTwoDimensionalIntArray();
    generator.print_2d(array_2d);

    std::set<int> numSet;
    std::cout << "Делятся на 3 и на 7:\n";
    for(int i=0; i < size; i++)
       {
           for(int j=0; j < size; j++)
           {
               if(numSet.count(array_2d[i][j]) == 0 && array_2d[i][j] != 0
                       && array_2d[i][j] % 3 == 0 && array_2d[i][j] % 7 == 0)
               {
                  std::cout << array_2d[i][j] << "\t";
                  numSet.insert(array_2d[i][j]);
               }
           }
       }
    std::cout<<std::endl;
}


// неуникальные элементы в массиве вещественных чисел
void task6()
{
    std::vector<float> array_f = generator.getRandomSortedFloat();
    generator.print_float_1d(array_f);

    int i = 0;
    std::map<float, int> nums_counter;
    std::cout<<"\nнеуникальные элементы в массиве вещественных чисел \n";

    while(i < size)
    {
        if (nums_counter.count(array_f[i]) > 0){
            if (nums_counter[array_f[i]] == 1)
            {
                std::cout << array_f[i] << "\t";
            }
            nums_counter[array_f[i]]++;
        }
        else
        {
            nums_counter[array_f[i]] = 1;
        }
      i++;
    }
}
