#include "dogs.h"
#include <string>
#include <iostream>
using namespace std;
dogs::dogs(string name, int age)
{
	cout << "I am born!  ";
	cout << "\t\t\n\n****************************************************************\n\n";
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

