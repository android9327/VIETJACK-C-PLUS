// bai1.7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;
extern int x = 1, y = 2;
extern char z = 'viet';
void show();
int tong(int x, int y);
int main()
{
	cout << "y " << y << endl;
	x = 3;
	cout << "x " << x << endl;

	cout << "z " << z << endl;
	char a = 'a', b = 'b', c = 'c';
	cout << "abc chinh la " << a << b << c << " thoi" << endl;
	show();
	cout << "tong cua 2 so x, y: " << tong(x, y) << endl;
	return 0;
}
void show() {
	cout << "Ban vua goi mot ham ma no in ra cai dong chu vo nghia nay :((" << endl;
}
int tong(int x, int y) {
	return x + y;
}
