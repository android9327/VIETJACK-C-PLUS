// Some_Operators.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
int main()
{
	//toan tu so hoc: '+' '-' '*' '/' '%' '++' '--'
	int x, y = 0;
	x = ++y;
	cout << "x: " << x << endl;
	cout << "y: " << y << endl;

	x = y++;
	cout << "x: " << x << endl;
	cout << "y: " << y << endl;

	//toan tu quan he: '==' '!=' '>' '<' '>=' '<='
	if (x <= y) cout << "x <= y" << endl;

	//toan tu logic: '&&' '||' '!'
	int a = 0x57; //0101 0111
	int b = 0x26; //0010 0110
	int c = a && b;
	int d = a || b;
	cout << "a && b: " << c << endl;
	cout << "a || b: " << d << endl;

	//toan tu so sanh bit: '&' '|' '^' '~' '<<' '>>'
	c = a & b;
	d = a | b;
	int e = a ^ b;
	int f = a >> 2;
	int g = a << 1;
	cout << "a & b: " << c << endl;
	cout << "a | b: " << d << endl;
	cout << "a ^ b: " << e << endl;
	cout << "a>>2: " << f << endl;
	cout << "a<<1: " << g << endl;

	//toan tu gan: '=' '+=' '-=' '*=' '/=' '%=' '<<=' '>>=' '&=' '^=' '|='
	e |= 2;
	f <<= 1;
	g >>= 2;
	cout << "e |=2 : " << e << endl;
	cout << "f<<=1 : " << f << endl;
	cout << "g>>=2 : " << g << endl;

	//toan tu hon hop: 'sizeof' 'condition ?X:Y' ',' 'Cast' '&' '*' (& va * la toan tu cho con tro)
	cout << "sizeof(a): " << sizeof(a) << endl;
	sizeof(a) == sizeof(b) ? cout << "sizeof(a) = sizeof(b)" : cout << "sizeof(a) != sizeof(b)";
	cout << endl;
	cout << "Cast: int(2.202) = " << int(2.202) << endl;
	int *h = &a;
	cout << "&a: " << h << endl;
	cout << "*a: " << *h << endl;
	return 0;
}

