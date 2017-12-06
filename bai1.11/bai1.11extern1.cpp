#include "stdafx.h"
#include <iostream>
using namespace std;

extern int x;
int func();
int main() {
	func();
	cout << "gia tri cua x: " << x << endl;
	return 0;
}