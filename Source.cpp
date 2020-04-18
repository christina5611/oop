#include <iostream>
#include <string>
#include "dogs.h"
#include "pupHealth.h"
#include "pupAccount.h"

using namespace std;

int tPuppies(int pupHealth);
int pupReferences(int pupAccount);

int main()
{
	system("color 1f");
	//title
	int pupHealth = 10;
	int pupAccount = 30;
	
	cout << "\n\n\t\t***THE PUPPIES***\n\n";
	cout << "\n\nThe pups health starts at a: " << pupHealth << endl;
	pupHealth = tPuppies(pupHealth);
	cout << "\nThe pups health is now at a " << pupHealth << endl;
	//now lets use these objects
	cout << "\n\nThe pups food starts at: " << pupAccount<< " bones.\n";
	pupAccount = pupReferences(pupAccount);


	return pupHealth;
}


