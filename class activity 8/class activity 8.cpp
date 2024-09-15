// class activity 8.cpp : This file contains the 'main' function. Program execution begins and ends there.
// type changing

#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
	int x = 10;
	int y = 3;
	double z = static_cast<double> (x) / y;
	cout << z;
	return 0;

}

