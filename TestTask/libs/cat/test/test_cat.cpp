#include <gtest/gtest.h>
#include <exception>

#include "cat/cat.h"

#include "animal/animal.h"

std::string globalString = "";

Cat createCat(){
  Cat catObject(globalString);
  return catObject;
}

TEST(Cat_test, Creating) {
    ASSERT_NO_THROW(createCat());
}

Animal* releaseCat(){

    Cat* returnObject;

    returnObject = new Cat(globalString);


    return returnObject;
}

TEST(Cat_test, ChindChecking) {


    Animal* testPtr = releaseCat();

    bool result = dynamic_cast<Cat*>(testPtr);

    ASSERT_TRUE(result);

}


TEST(Cat_test, SayChecking) {

    const std::string etalonMeow = "Meow!";

    std::string outputString;

    Cat cat(outputString);

    cat.say();

    ASSERT_STREQ(etalonMeow.c_str(), outputString.c_str());

}





TEST(Cat_test, AnimalSayChecking) {

    const std::string etalonMeow = "Meow!";

    std::string outputString;

    Animal* testedObject = new Cat (outputString);

    testedObject->say();

    ASSERT_STREQ(etalonMeow.c_str(), outputString.c_str());

}






















