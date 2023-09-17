#include "cat/cat.h"



Cat::Cat(std::string& str): outStr(str)
{

}

void Cat::say()
{
    outStr = "Meow!";
}

Cat::~Cat()  = default;
