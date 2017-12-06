// Bai1.6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	typedef float soThuc;

	soThuc vanToc = 4;

	cout << "Kich co cua char la: " << sizeof(char) << "\n";
	cout << "Kich co cua int la: " << sizeof(int) << "\n";
	cout << "Kich co cua short int la: " << sizeof(short int) << "\n";
	cout << "Kich co cua long int la: " << sizeof(long int) << "\n";
	cout << "Kich co cua float la: " << sizeof(float) << "\n";
	cout << "Kich co cua double la: " << sizeof(double) << "\n";
	cout << "Kich co cua wchar_t la: " << sizeof(wchar_t) << "\n";
	cout << "Kich co cua dongVat la: " << sizeof(soThuc) << "\n";
	cout << "gia tri cua cat la: " << vanToc << "\n";
	enum HangHoa
	{
		coca,
		pessi,
		chanh = 7,
		dua
	};
	HangHoa a, b, c;
	a = coca;
	b = pessi;
	c = dua;
	cout << "a " << a << "\n";
	cout << "b " << b << "\n";
	cout << "c " << c << "\n";
	cout << "pessi " << pessi << "\n";
	cout << "dua " << dua << endl;
	return 0;

}

