// Task4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		n % i == 0;
		
		if (n % i == 0)
		{
			cout << i << endl;
		}
	}
	system("PAUSE");
    return 0;
}

