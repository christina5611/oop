#pragma once

#include <string>
using namespace std;

int tPuppies(int pupHealth)
{
	//objects. we only use classes to create objects
	dogs terrior("Bean", 6);
	dogs pug("Fifi", 5 );
	dogs poodle("Sweatpea", 3 );
	dogs hound("Bella", 8 );
	cout << "\t\t\n\n****************************************************************\n\n";
	hound.Talk("\nWas that a ball, I think I want the ball. BALLL!\n");

	poodle.Walk(20, "pin\n");
	poodle.Talk("\ncalm down it wasnt a ball.\n");
	hound.Talk("\nYes it was, I saw it. BALLL!\n");
	pug.Walk(15, "pin\n");
	pug.Talk("\nHi everyone did yall see Alex\n");
	terrior.Talk("\nDid someone call me?\n");
	cout << "\nFifi lifts up on her hind legs.\n";
	pug.Talk("\nYeah you dufus where you been?\n");
	terrior.Walk(5, "pin\n");
	terrior.Talk (" \nIf you must know I was being chased by a dragon.");
	cout << "\n Does fifi shake her head or does she jump on him? Type Shake or Jump:";
	string userChoice;
	getline(cin, userChoice);

	if (userChoice == "Shake" || userChoice == "shake")

	{

		cout << "\n.Chased by A dragon?\n\n";
		cout << "I simply dont believe in such nonsense.\n";
		cout << "I bet you haven't even been out of the house.\n";
		cout << "You were probably off eating away all of the snacks in the kitchen again.\n";
		cout << "Fifi wanders off to join the others. Bean sits down and turns his head to the side.\n";

		pupHealth--;
	}
	else if (userChoice == "Jump" || userChoice == "jump")
	{
		// if user choice is no
		cout << "\nDo you think im stupid says Fifi as she jumps on Bean?\n";
		cout << "\n Bella tries to pull Fifi off Bean. Sweatpea laughs in the corner.\n";
		cout << "\nBella screams at Sweatpea. A little help please!";
		cout << "Sweatpea walks over and pulls Fifi of Bean. \n";
		pupHealth++;
	}
	else
	{
		cout << "\nSorry that was an invalid response\n";
		

	}
	return pupHealth;
}
