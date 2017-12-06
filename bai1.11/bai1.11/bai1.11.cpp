// bai1.11.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;
static int biendem = 10;
void func();
int main()
{
	register int diemthi = 10;

	int diemthi2 = 20;
	diemthi++;

	cout << diemthi << "\t" << diemthi2 << endl;
	while (biendem--)
		func();
	return 0;
}
void func() {
	static int i = 5;
	i++;
	cout << "gia tri cua i: " << i << "\tgia tri cua biendem: " << biendem << endl;
}
