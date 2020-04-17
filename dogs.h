#pragma once
#include <string>

using namespace std;
//a class is template
// you have to make a class before you can make an object
//a class can make many objects
class dogs
{
public:
    //methods are just functions
    void Talk(string stuffToSay);
    void Walk(int numberOfSteps, string dest);
    //public property
    dogs(string name, string age, int health);
    string HairColor;
    int Health;
private:
    //variables
    string Name;
    string Age;
    
};

