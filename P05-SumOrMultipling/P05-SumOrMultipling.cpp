#include <iostream>
#include<windows.h>
#include<iomanip>

using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	double a, b,s,m;
	cout << "Enter a: ";
	cin >> a;
	cout << "Enter b: ";
	cin >> b;

	if (a<0||b<0)
	{
		s = a + b;
		cout << "The sum of a and b is: " << s << endl;;
	}
	else
	{
		m = a * b;
		cout << "The product of a and b is: " << m << endl;
	}
}