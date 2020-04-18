#pragma once
#include <string>
using namespace std;

int AddTwoNumber(int firstNumber, int secondNumber);

int pupReferences(int pupAccount)

{

	cout << "The pups have: " << pupAccount << endl;

	int& r_pupAccount = pupAccount;

	cout << "\nThe humans like  the bones so they take:" << r_pupAccount << endl;



	//change the account balance and check the value

	pupAccount = 10;

	cout << "\nThis is the actual account and this is the balance of that account :" << pupAccount << endl;

	cout << "\nThe hacked account will present :" << r_pupAccount << endl;



	//display end total

	int a = 30;

	int b = 10;

	int sum = a - b;

	cout << " Account Balance: " << sum << endl;

	int humanAccount;

	humanAccount = 20;

	cout << "\nThe account balance for this customer is :" << humanAccount << endl;

	int& r_secondaryAccount = humanAccount;

	cout << "\nThe hacked account will present :" << r_secondaryAccount << endl;
	humanAccount = 25;
	cout << "\nThis is the actual account and this is the balance of that account :" << humanAccount << endl;
	cout << "\nThe hacked account will present :" << r_secondaryAccount << endl;
	int x = 20;
	int y = 25;
	AddTwoNumber(x, y);
	return 0;

}
int AddTwoNumber(int firstNumber, int secondNumber)

{



	const int r_sum = firstNumber - secondNumber;

	cout << " Account Balance: " << r_sum << endl;

	return 0;

}