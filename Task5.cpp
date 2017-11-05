// Task5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{

	int a, b, c;
	int count = 0;

	for (int i = 100; i<1000; i++)
	{
		a = i / 100 % 10,
		b = i / 10 % 10,
		c = i % 10;

		if ( a == b || a ==c || b == c)
		{
			continue;
	        }
		cout << i << " " << endl;
		count++;
        } 
	cout << count << endl;

	system("PAUSE");
    return 0;
}

