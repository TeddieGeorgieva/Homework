// Task1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{
	double n;
	double sum = 0;
	cout << "Enter a number between 10 and 5555: " << endl;
	
	
	do {
		cin >> n;
		sum = sum + n;
		cout << "The sum is: " << sum << endl;
		
	} while (n >= 10 && n <= 5555);

    return 0;
}

