#include <iostream>
#include <string>
//links the header files to the main file
#include "dogs.h"
#include "pupHealth.h"
#include "pupAccount.h"
#include "tBones.h"
using namespace std;

int tPuppies(int pupHealth);
int pupReferences(int pupAccount);
int tBones(int Bones);
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
	
	Bones = tBones(Bones);
	pupAccount = pupReferences(int pupAccount);
	cout << "\n\nThe pups food starts at: " << pupAccount<< " bones.\n";
	pupAccount = pupReferences(pupAccount);


	return pupHealth;
}



