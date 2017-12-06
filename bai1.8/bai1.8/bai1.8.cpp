// bai1.8.cpp : Defines the entry point for the console application.
//bien toan cuc va bien cuc bo
//

#include "stdafx.h"
#include <iostream>
using namespace std;

//bien toan cuc
int a = 5;
int sum(int x, int y);
int main()
{
	//bien cuc bo
	int b = 10;
	int x = 1, y = 2;
	a = sum(x, y);
	b = sum(x, y);
	cout << "a " << a << endl;
	cout << "b " << b << endl;
	int a = 1;
	cout << "gia tri moi a " << a << endl;
	return 0;
}
int sum(int x, int y) {
	return x + y + a;
	//error compiler:
	// return x + y + b;
}