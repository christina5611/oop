#pragma once
#include <string>

using namespace std;

int tBones(int Bones)
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

		Bones--;
	}
	else if (userChoice == "Fight" || userChoice == "fight")
	{
		// if user choice is fight
		cout << "\n human gets chased by the dog the cat tries to stop them and gets bit in the process.\n";
		cout << "\n the cat starts to bleed and the dog lets go of the human and cries.\n";
		cout << "\n the human get up runs to the cat and cuddles with it.";
		cout << "the dog walks over and apologies the cat gets up walks to the foods eats and doesn't share.\n";
		Bones++;
	}
	else
	{
		cout << "\nSorry that was an invalid response\n";


	}
	return Bones;
}
