// Task6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int n=0;
	int sum = 0;
	cout << "Enter a number between 10 and 99" << endl;
	cin >> n;

	while ( n < 10 || n > 99)
	{
		cout << "Invalid number. Enter a valid number!" << endl;
		cin >> n;
	}
	for (int i = 10; i < n; i++)
	{
		sum+= i;
	}
	
	cout << "The sum is: " << sum << endl;

	system("PAUSE");
    return 0;
}

