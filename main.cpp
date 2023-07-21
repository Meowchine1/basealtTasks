#include <iostream>
#include <randomArrayGeneration.h>
#include <cstdlib>
#include <ctime>
#include <limits.h>
#include <climits>
int main(int argc, char *argv[])
{
    unsigned int size = 6;
    RandomArrayGeneration generator(size);

    int *array = generator.gen();
    std::cout << "Одномерный массив" << std::endl;
    generator.print_1d(array);

    int array_min = INT_MAX;
    int *start = array;
    int *end = array + size-1;
    for (;start < end; start++)
    {
        if (*start < array_min)
        {
            array_min = *start;
        }
    }

    std::cout << "\nМинимальное число в массиве целых чисел = " << array_min << "\n" <<std::endl;

    start = array;
    end = array + size-1;
    int array_max = INT_MIN;
    while (start < end)
    {
        if (*start > array_max)
        {
            array_max = *start;
        }
        start++;
    }
    std::cout << "Максимальное число в массиве целых чисел = " << array_max << "\n" <<std::endl;



    std::cout << "Двумерный массив:" << std::endl;
    int **array_2d = generator.gen_2d();
    generator.print_2d(array_2d);
    int max_2d = INT_MIN;
    for(int i=0; i < size; i++)
       {
           for(int j=0; j < size; j++)
           {
               if(array_2d[i][j] > max_2d)
               {
                   max_2d = array_2d[i][j];
               }
           }
       }

    std::cout << "Максимальное число в двумерном массиве целых чисел = " << max_2d << "\n" <<std::endl;


    float *array_f = generator.gen_sort_float();
    generator.print_float_1d(array_f);
    std::cout <<"\n"<< std::endl;
    std::cout<<"Максимальное число в отсортированном массиве вещ. чисел = "<<array_f[size-1]<<std::endl;


    int divide_3 = 0;
    int divide_3_7 = 0;

    for(int i=0; i < size; i++)
       {
           for(int j=0; j < size; j++)
           {
               if(array_2d[i][j] % 3 == 0)
               {
                   divide_3++;
                  if(array_2d[i][j] % 7 == 0)
                  {
                    divide_3_7++;
                  }

               }
           }
       }

    int array_divide3[divide_3];
    int array_divide3_7[divide_3_7];

    int t = 0;
    int s = 0;

    for(int i=0; i < size; i++)
       {
           for(int j=0; j < size; j++)
           {
               if(array_2d[i][j] % 3 == 0)
               {
                   array_divide3[t] = array_2d[i][j];
                   t++;
                  if(array_2d[i][j] % 7 == 0)
                  {
                    array_divide3_7[s] = array_2d[i][j];
                    s++;
                  }

               }
           }
       }

      std::cout<< "Делятся на 3: "<<std::endl;
    for(int elem : array_divide3)
    {
        std::cout<< elem<<"\t";
    }

    std::cout<<std::endl;
    std::cout<< "Делятся на 3 и 7: "<<std::endl;
    for(int elem : array_divide3_7)
    {
        std::cout<< elem<<"\t";
    }


    std::map<float, int> nums_counter;
    int *float_start = array_f;
    int *float_end = array_f + size;
    while(float_start < float_end)
    {
        if (nums_counter.count(*float_start)){

        }
      float_start++;
    }


    /*
Выбрать в 2 мерном массиве все числа которые делятся на 3 и потом из них те которые делятся на 7.
Найти все не уникальные элементы в массиве вещественных чисел.
*/
}
