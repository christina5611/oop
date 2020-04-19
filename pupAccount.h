#pragma once
#include <string>
using namespace std;

int AddTwoNumber(int firstNumber, int secondNumber);

int pupReferences(int pupAccount)

{

	cout << "The pups have: " << pupAccount << " bones." << endl;

	int& r_pupAccount = pupAccount;

	cout << "\nThe humans likes the bones so they take: " << r_pupAccount << endl;

	pupAccount = 15;

	cout << "\nThe pups decide to take back some of their bones so now they have: " << pupAccount << endl;

	cout << "\nSo really the humans only took:" << r_pupAccount << " bones" << endl;



	//display end total

	int a = 30;

	int b = 15;

	int sum = a - b;

	cout << " They now have: " << sum << " bones" << endl;

	int humanAccount;

	humanAccount = 30;

	cout << "\nThe humans have:" << humanAccount << " bones" << endl;

	int& r_humanAccount = humanAccount;

	cout << "\nThe dogs switches the bones. The humans now have:" << r_humanAccount << "bones" << endl;
	humanAccount = 25;
	cout << "\nThis  is the amount of bones the humans actually have:" << humanAccount << endl;
	cout << "\nBut the humans dont know that the humans think they only have :" << r_humanAccount << "bones" << endl;
	int x = 30;
	int y = 25;
	AddTwoNumber(x, y);
	return 0;

}
int AddTwoNumber(int firstNumber, int secondNumber)

{

	//display end total

//int x = 517;

//int y = 22;

	const int r_sum = firstNumber - secondNumber;

	cout << " The real sum of bones. " << r_sum << endl;

	return 0;

}