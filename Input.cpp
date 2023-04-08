#include "Input.h"
#include "Display.h"
#include <iostream>

std::string Input::GetLine()
{
    std::string text;
    std::getline(std::cin, text);
    return text;
}

int Input::GetInt(int min, int max)
{
    int output;
    std::string str;
    do
    {
        str = GetLine();
        try
        {
            output = std::stoi(str);
        }
        catch(std::invalid_argument e)
        {
            Display::Print("Enter a number");
        }
        
    }
    while(output < min || output > max);
    return output;
}