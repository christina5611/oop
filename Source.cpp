#include <iostream>
#include <string>
#include "dogs.h"


using namespace std;
int tPuppies(int pupHealth);


int main()
{
	system("color 3f");
	//title
	cout << "\n\n\t\t***THE PUPPIES***\n\n";
	int pupHealth = 100;
	pupHealth = tPuppies(pupHealth);

	cout << "\nMom's happiness is now at a: " << pupHealth<< endl;
	//now lets use these objects
	
	


	return 0;
}

int tPuppies(int pupHealth)
{
	//objects. we only use classes to create objects
	dogs terrior("Bean", "6 months old", 100);
	dogs pug("Fifi", "5 months old", 100);
	dogs poodle("Sweatpea", "3 months old", 100);
	dogs hound("Bella", "8 months old", 100);

	hound.Talk("\nWas that a ball, I think I want the ball. BALLL!\n");

	poodle.Walk(20, "pin\n");
	poodle.Talk("\ncalm down it wasnt a ball.\n");
	hound.Talk("\nYes it was, I saw it. BALLL!\n");
	pug.Walk(15, "pin\n");
	pug.Talk("\nHi everyone did yall see Alex\n");
	terrior.Talk("\nDid someone call me?\n");
	cout << "\nFifi lifts up on her hind legs.\n";
	pug.Talk("\nYeah you dufus where you been?\n");

	cout << " \nWhat's wrong? ,your mom asks as you continue to sob into her arms.";
	cout << "\n Do you tell her what has happened? Type yes or no:";
	string userChoice;
	getline(cin, userChoice);
	if (userChoice == "yes" || userChoice == "yes")

	{

		cout << "\nWhy didn't you tell me. Why didn't you tell me what i am!You yell at her becoming angry.\n\n";
		cout << "\nYou have to understand i wanted to tell you but it wasn't safe. She says looking down at you.\n";
		cout << "\nRemoving yourself from her arms, you square your shoulders and look directly into her eyes\n";
		cout << "\nIf you think i've ever known what it feels like to be safe you are sadly mistaken Noti.\n";
		cout << "\nThe iciness in your voice causes your mom to flinch away.";
		pupHealth--;
	}
	else if (userChoice == "no" || userChoice == "no")
	{
		// if user choice is no
		cout << "\nDrying your eyes you look around hoping no one saw your one moment of weakness.\n";
		cout << "\n I'm sorry you tell her as you rush off in the other direction.\n";
		cout << "\nShe tries to catch you before you disappear ";
		cout << "but your coat jacket slips between her fingers as you round the corner ";
		pupHealth++;
	}
	else
	{
		cout << "\nSorry that was an invalid response";
	return pupHealth;

}



