// Task3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	
	
	cout << "Enter a number: " << endl;
	int num;
	cin >> num;
	int count = 0;
	
	while (num > 0)
	{
		num= num / 10;
		count++;
	}
	cout << "Count = "<< count << endl;
	
	system("PAUSE");
    return 0;
}

