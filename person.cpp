#include "person.h"
#include <string>
#include <iostream>
using namespace std;
person::person(string name, string age, int health)
{
	cout << "\nI am born!\n";
	Name = name;
	Age = age;
	Health = health;
}
void person::Talk(string stuffToSay)
{
	cout << endl << Name << " says " <<stuffToSay << endl;
}
void person::Walk(int numberOfSteps)
{
	cout << "\nThis person takes " << numberOfSteps << endl;
}

