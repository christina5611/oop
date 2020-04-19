#pragma once
#include <string>
using namespace std;
//tells the function to add or subtract the first and second number
int AddtheBones(int firstNumber, int secondNumber);

int pupReferences(int pupAccount)

{

	cout << "The pups have: " << pupAccount << " bones." << endl;
	//references the pup account
	int& r_pupAccount = pupAccount;
		cout << "\nThe humans likes the bones so they take: " << r_pupAccount << endl;
		//how much the pup account is worth
	pupAccount = 15;
	cout << "\nThe pups decide to take back some of their bones so now they have: " << pupAccount << endl;
	cout << "\nSo really the humans only took:" << r_pupAccount << " bones." << endl;
	//subtract the two values to get the sum

	int a = 30;
	int b = 15;
	int sum = a - b;
	cout << " They now have: " << sum << " bones." << endl;
	int humanAccount;
	//tells how much is in the human account
	humanAccount = 30;
	cout << "\nThe humans have:" << humanAccount << " bones." << endl;
	int& r_humanAccount = humanAccount;
	cout << "\nThe dogs switches the bones. The humans now have:" << r_humanAccount << " bones." << endl;
	//tells how much is in the human account
	humanAccount = 25;
	cout << "\nThis  is the amount of bones the humans actually have:" << humanAccount << endl;
	//references the humanAccount
	cout << "\nBut the humans dont know that the humans think they only have :" << r_humanAccount << " bones." << endl;
	int x = 30;
	int y = 25;
	AddtheBones(x, y);
	return sum;
}
int AddtheBones(int firstNumber, int secondNumber)

{

	//references the sum

	const int r_sum = firstNumber - secondNumber;

	cout << " The real sum of bones: " << r_sum << endl;

	return = r_sum;

}