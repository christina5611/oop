#pragma once
#include <string>

using namespace std;

int AddTwoNumber(int firstNumber, int secondNumber);
int pupReferences(int pupAccount)

{
	cout << "has :" << pupAccount << " bones" endl;



	//reference for the primary account and checking the value

	int& r_pupAccount = pupAccount;

	cout << "\nThe hacked account will present :" << r_pupAccount << endl;



	//change the account balance and check the value

	pupAccount = 733;

	cout << "\nThis is the actual account and this is the balance of that account :" << pupAccount << endl;

	cout << "\nThe hacked account will present :" << r_pupAccount << endl;



	//display end total

	int a = 1000;

	int b = 733;

	int sum = a - b;

	cout << " Account Balance: " << sum << endl;

	int humanAccount;

	humanAccount = 517;

	cout << "\nThe account balance for this customer is :" << humanAccount << endl;

	int& r_humanAccount = humanAccount;

	cout << "\nThe hacked account will present :" << r_humanAccount << endl;
	humanAccount = 22;
	cout << "\nThis is the actual account and this is the balance of that account :" << humanAccount << endl;
	cout << "\nThe hacked account will present :" << r_humanAccount << endl;
	int x = 517;
	int y = 22;
	AddTwoNumber(x, y);
	return 0;

}
int AddTwoNumber(int firstNumber, int secondNumber)

{

	//display end total

//int x = 517;

//int y = 22;

	const int r_sum = firstNumber - secondNumber;

	cout << " Account Balance: " << r_sum << endl;

	return 0;

}