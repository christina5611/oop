#include <iostream>
#include <string>
//links the header files to the main file
#include "dogs.h"
#include "pupHealth.h"
#include "pupAccount.h"

using namespace std;

int tPuppies(int pupHealth);
int pupReferences(int pupAccount);
int tBones(int pupHealth);
int main()
{
	system("color 1f");
	//title
	//the pups initial health
	int pupHealth = 10;
	//the amount of bones in the account
	int pupAccount = 30;
	//the title
	cout << "\n\n\t\t***THE PUPPIES***\n\n";
	//telling the user what the pups health and account starts at
	cout << "\n\nThe pups health starts at a: " << pupHealth << endl;
	pupHealth = tPuppies(pupHealth);
	cout << "\nThe pups health is now at a " << pupHealth << endl;
	
	pupHealth = tBones(int pupHealth);
	cout << "\n\nThe pups food starts at: " << pupAccount<< " bones.\n";
	pupAccount = pupReferences(pupAccount);


	return pupHealth;
}


int tBones(int pupHealth)
{
	cout << "\n The cats bring in the dogs and the humans meals.";
	cout << "\n Every one jumps around. Do they eat quietly or fight over the food?";
	cout << "Type Eat or Fight:";
	//get user choice
	string userChoice;
	getline(cin, userChoice);

	if (userChoice == "Eat" || userChoice == "eat")

	{
		// if user choice is eat
		cout << "\n.dog gets chased by the human\n\n";
		cout << "I simply dont believe in such nonsense stop that right now!\n";
		cout << " Do you need a time out?\n";
		cout << "the human shakes its head sits down and eat its meal.\n";
		cout << " the cat breaths sits down ,enjoys some tv ,and eat its meal\n";

		pupHealth--;
	}
	else if (userChoice == "Fight" || userChoice == "fight")
	{
		// if user choice is fight
		cout << "\n human gets chased by the dog the cat tries to stop them and gets bit in the process.\n";
		cout << "\n the cat starts to bleed and the dog lets go of the human and cries.\n";
		cout << "\n the human get up runs to the cat and cuddles with it.";
		cout << "the dog walks over and apologies the cat gets up walks to the foods eats and doesn't share.\n";
		pupHealth++;
	}
	else
	{
		cout << "\nSorry that was an invalid response\n";


	}
	return pupHealth;
}

