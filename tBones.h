#pragma once
#include <string>

using namespace std;

int tBones(int Bones)
{
	cout << "\n The cats bring in the dogs and the humans meals.";
	cout << "\n Every one jumps around. Do they eat quietly or fight over the food?\n";
	cout << "Type Eat or Fight:";
	//get user choice
	string userChoice;
	getline(cin, userChoice);

	if (userChoice == "Eat" || userChoice == "eat")

	{
		// if user choice is eat
		cout << "\n.dog gets chased by the human\n\n";
		cout << "I simply dont believe in such nonsense stop that right now!\n";
		cout << "Do you need a time out?\n";
		cout << "The human shakes its head sits down and eat its meal.\n";
		cout << "The cat breaths, sits down ,enjoys some tv ,and eats its meal\n";

		Bones--;
	}
	else if (userChoice == "Fight" || userChoice == "fight")
	{
		// if user choice is fight
		cout << "\n The human gets chased by the dog the cat tries to stop them and gets bit in the process.";
		cout << "\n The cat starts to bleed and the dog lets go of the human and cries.";
		cout << "\n The human get up runs to the cat and cuddles with it.";
		cout << "\nThe dog walks over and apologies to the cat gets up walks to the foods eats and doesn't share.\n";
		Bones++;
	}
	else
	{
		cout << "\nSorry that was an invalid response\n";


	}
	return Bones;
}
