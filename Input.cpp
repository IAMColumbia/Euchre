#include "Input.h"
#include <iostream>

std::string Input::GetLine()
{
    std::string text;
    std::getline(std::cin, text);
    return text;
}

int Input::GetInt(int min, int max)
{
    if(min < 0)
    { min = 0; }

    int output = min - 1;
    while(output < min || output > max)
    {
        
    }
}