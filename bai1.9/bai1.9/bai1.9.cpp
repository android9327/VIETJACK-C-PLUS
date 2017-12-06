// bai1.9.cpp : Defines the entry point for the console application.
// Hang trong C/C++
//

#include "stdafx.h"
#include <iostream>

using namespace std;

#define x 3;
#define newline cout << endl;
const int bring = 10;
const int green = 15;
const int white = 20;

int main()
{
	const int a = 05;
	const int b = 10;
	const int c = 0xFf;
	const int d = 3u;
	const int e = 3l;
	const int f = 5ul;
	const int g = x;
	const int f1 = 0.01;
	const float f2 = 0.2;
	const double f3 = 3.334;
	const float f4 = 4.10E2;
	const char nextline = '\n';

	cout << "c: " << c << endl;
	cout << "g: " << g << endl;
	cout << "f1: " << f1 << endl;
	cout << "f2: " << f2 << endl;
	cout << "f3: " << f3 << endl;
	cout << "f4: " << f4 << endl;
	cout << nextline;
	
#define red 1;
#define green 2;
#define blue 3;

	int gr = green;
	int wh = white;
	cout << "green :" << gr << endl;
	cout << "white: " << white << endl;
	newline;
	//c: 255
	//g : 3
	//f1 : 0
	//f2 : 0.2
	//f3 : 3.334
	//f4 : 410
	//
	//
	//Press any key to continue . . .

	return 0;
}

