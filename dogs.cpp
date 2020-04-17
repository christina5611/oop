#include "dogs.h"
#include <string>
#include <iostream>
using namespace std;
dogs::dogs(string name, string age, int health)
{
	cout << "I am born!  ";
	Name = name;
	Age = age;
	
	
}
void dogs::Talk(string stuffToSay)
{
	cout << endl << Name << ": " <<stuffToSay ;
}
void dogs::Walk(int numberOfSteps, string dest)
{
	cout << endl << Name << " takes " << numberOfSteps << " steps into the " << dest ;
}

