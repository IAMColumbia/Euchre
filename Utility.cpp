#include "Utility.h"

int Utility::RandomRange(int min, int max)
{
    max--; //max is exclusive
    return rand() % max + min;
}