#include <iostream>
#include <string>
#include <vector>
#include "dogs.h"
#include "pupHealth.h"

using namespace std;

int tPuppies(int pupHealth);
int Jumble();

int main()
{
	system("color 1f");
	//title
	int pupHealth = 100;
	cout << "\n\n\t\t***THE PUPPIES***\n\n";
	cout << "\n\nThe pups health starts at a: " << pupHealth << endl;
	pupHealth = tPuppies(pupHealth);
	cout << "\nThe pups health is now at a " << pupHealth << endl;
	//now lets use these objects
	int Jumble();


	return pupHealth;
}

int Jumble()
{
	vector<string> inventory;
	inventory.push_back("sword");
	inventory.push_back("armour");
	inventory.push_back("shield");

	cout << "You have" << inventory.size() << "items\n";
	cout << "Your items:\n";
	for (unsigned int i = 0; i < inventory.size(); ++i)
	{
		cout << inventory[i] << endl;
	}
	cout << "\nYou trade your sword for a battle axe";
	inventory[0] = "battle axe";
	cout << "\nYour items:\n";
	for (unsigned int i = 0; i < inventory.size(); ++i)
	{
		cout << inventory[i] << endl;
	}
	cout << "\nThe item name'" << inventory[0] <<
	return 0;
}


