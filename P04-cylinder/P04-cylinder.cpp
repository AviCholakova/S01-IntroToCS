#include <iostream>
#include<windows.h>
#include<iomanip>

using namespace std;

int main()
{
	cout << "Enter parameters of cylinder: " << endl;
	double r, h, b, s, v, pi;
	pi = 3.14;
	cout << "Enter r: "; cin >> r;
	cout << "Enter h: "; cin >> h;
	b = pi * r * r;
	s = 2 * pi * r * h + 2 * b;
	v = b * h;
	cout << "Base area: " << b << endl;
	cout << "Surface area: " << s << endl;
	cout << "Volume: " << v << endl;

}