#include "Utility.h"
#include <random>
#include <ctime>

int Utility::RandomRange(int min, int max)
{
    static std::mt19937 gen(std::time(nullptr)); //Better to find another proper source of entropy
    std::uniform_int_distribution<> dis(min, max-1);
    return dis(gen);
}