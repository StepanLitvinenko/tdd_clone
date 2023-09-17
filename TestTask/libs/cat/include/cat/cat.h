#ifndef CAT_H
#define CAT_H

#include "animal/animal.h"

#include <string>

class Cat: public Animal{
public:

    Cat(std::string& str);
    void say() override;
   ~Cat() override;
private:
    std::string& outStr;
};


#endif
