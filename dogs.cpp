#include "dogs.h"
#include <string>
#include <iostream>
using namespace std;
dogs::dogs(string name, int age)
{
	// says i am born for everyobject in class dogs
	cout << "I am born!  ";
	cout << "\t\t\n\n****************************************************************\n\n";
	Name = name;
	Age = age;
	
	
}
// displays the dogs name and what they have to say
void dogs::Talk(string stuffToSay)
{
	cout << endl << Name << ": " <<stuffToSay ;
}
//tells the number of steps the dogs take and the destination
void dogs::Walk(int numberOfSteps, string dest)
{
	cout << endl << Name << " takes " << numberOfSteps << " steps into the " << dest ;
}

