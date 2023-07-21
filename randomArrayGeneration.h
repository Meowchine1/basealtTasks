#ifndef RANDOMARRAYGENERATION_H
#define RANDOMARRAYGENERATION_H

class RandomArrayGeneration
{
public:
    unsigned int size;

    RandomArrayGeneration(unsigned int size);
    ~RandomArrayGeneration();

    int *gen();
    int **gen_2d();
    float *gen_sort_float();

    void print_1d(int *array);
    void print_2d(int **array);
    void print_float_1d(float *array);


};

#endif // RANDOMARRAYGENERATION_H


