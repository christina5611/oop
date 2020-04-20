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
//the main function
int main()
{
	// colors the backgroung and the words
	system("color 1f");
	
	//the pups initial health
	int pupHealth = 10;
	//the amount of bones in the pups account
	int pupAccount = 30;

	// The value of the bones
	int Bones = 20;
	//the title
	cout << "\n\n\t\t***THE PUPPIES***\n\n";
	//telling the user what the pups health and account starts at
	cout << "\n\nThe pups health starts at a: " << pupHealth << endl;
	pupHealth = tPuppies(pupHealth);
	cout << "\nThe pups health is now at a " << pupHealth << endl;
	
	Bones = tBones(Bones);
	pupAccount = pupReferences(pupAccount);
	cout << "\n\nThe pups food starts at: " << pupAccount<< " bones.\n";
	pupAccount = pupReferences(pupAccount);


	return pupHealth;
}



