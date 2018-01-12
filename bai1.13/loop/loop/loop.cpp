// loop.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "loop.h"

using namespace std;

int fibonaci(int n);
int main()
{
	int i = 0;
	for (; i < 10; i++) {
		//out(i);
	}

	while (i <= 20) {
		//out(i);
		i++;
	}

	do {
		//out(i);
		i++;
	} while (i < 30);
	// Fibonaci
	// a1 = 0; a2 = 1; a3 =1; a4 = 2; a5 = 3;a6 = 5;a7 = 8;a8 = 13; ....tinh an = ?
	int n = 1;
	do {
		cout << "Nhap n:";
		cin >> n;
	} while (n < 1);

	fibonaci(n);

	return 0;
}
int fibonaci(int n) {
	int a1 = 0, a2 = 1, a3 = -1;
	if (n == 1) {
		outans(n, a1); return a1;
	}
	for (int i = 3; i <= n; i++)
	{
		if (i % 3 == 0)	a3 = a1 + a2;
		if (i % 3 == 1)	a1 = a2 + a3;
		if (i % 3 == 2)	a2 = a1 + a3;
	}
	int result = MAX(a1, a2, a3);
	outans(n, result);
	return result;
}
