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
	
	for (int i = n; i > 1; i--)
	{
		i % 7 == 0;
		
		if (i % 7 == 0)
		{
		cout << i << endl;
		}
	}

	system("PAUSE");
    return 0;
}

