#ifndef RANDOMARRAYGENERATION_H
#define RANDOMARRAYGENERATION_H
#include <vector>

class RandomArrayGeneration
{
private:
    unsigned int size;
    int divider = 21;
    float coef = 0.3;
    std::vector<std::vector<int>> intVectorCollection;
    std::vector<std::vector<float>> floatVectorCollection;
    std::vector<std::vector<std::vector<int>>> twoDimensionalArrayCollection;

public:
    RandomArrayGeneration(unsigned int size);
    RandomArrayGeneration(const RandomArrayGeneration &generator) = delete;
    RandomArrayGeneration& operator=(const RandomArrayGeneration &generator) = delete;
    ~RandomArrayGeneration();

    std::vector<int> getRandomInt();
    std::vector<std::vector<int>> getRandomTwoDimensionalIntArray();
    std::vector<float> getRandomSortedFloat();

    void print_1d(std::vector<int> array);
    void print_2d(std::vector<std::vector<int>> array);
    void print_float_1d(std::vector<float> array);


};

#endif // RANDOMARRAYGENERATION_H


