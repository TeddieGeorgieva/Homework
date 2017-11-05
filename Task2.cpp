// Task2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{
	int num;
	int sum = 0;
	int total = 0;
	double srednoar;

	cout << "Enter a number between 1 and 200: " << endl;
	do {
		cin >> num;
		sum = sum + num;
		cout << sum << endl;

		total = num + num;
		cout << total << endl;

		srednoar = (num++ % total);
		cout << srednoar << endl;
	} while (num >= 1 && num <= 200);

    return 0;
}

