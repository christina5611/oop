#include <iostream>
#include <string>
#include "dogs.h"
#include "pupHealth.h"

using namespace std;
int tPuppies(int pupHealth);


int main()
{
	system("color 3f");
	//title
	cout << "\n\n\t\t***THE PUPPIES***\n\n";
	int pupHealth = 15;
	pupHealth = tPuppies(pupHealth);

	cout << "\nThe pups health is now " << pupHealth<< endl;
	//now lets use these objects
	


	return 0;
}




