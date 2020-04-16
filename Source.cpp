#include <iostream>
#include <string>
#include "person.h"

using namespace std;

int main()
{
	//title
	cout << "\n\n\t\t***OUR WORLD***\n\n";
	//objects. we only use classes to create objects
	person student1("Sam", "20 years old", 100);
	person student2("Christina", "25 years old", 100);
	person student3("Drayce", "20 years old", 100);
	person proffesor("Proffesor Hinton", "30 years old", 100);
	person student4("Marc", "22 years old", 100);
	//now lets use these objects
	proffesor.HairColor = "Grey";
	proffesor.Talk(" Welcome to the class.");
	student1.Talk("Is there a reason to use classes instead of headers.");
	proffesor.Talk("Yes, to save code.");
	student2.Walk(20, "classroom");
	student2.Talk("Sorry, I am late there was a dragon chasing me!");


	return 0;
}