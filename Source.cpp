#include <iostream>
#include <string>
#include "dogs.h"
#include "pupHealth.h"

using namespace std;
int tPuppies(int pupHealth);


int main()
{
	system("color 2f");
	//title
	int pupHealth = 100;
	cout << "\n\n\t\t***THE PUPPIES***\n\n";
	cout << "\n\nThe pups health starts at a: " << pupHealth << endl;
	pupHealth = tPuppies(pupHealth);
	cout << "\nThe pups health is now at a " << pupHealth << endl;
	//now lets use these objects
	


	return pupHealth;
}




