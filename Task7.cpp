// Task7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{
	int n=0;
	cout << "Enter a number between 10 and 200" << endl;
	cin >> n;
	
	if (n >= 10 && n <= 200) 
	{
		for (int i = n; i > 1; i--)
		{
			i % 7 == 0;

			if (i % 7 == 0)
			{
				cout << i << endl;
			}
		}
	}
	else 
	{
		cout << "Invalid number" << endl;
	}
	system("PAUSE");
    return 0;
}

