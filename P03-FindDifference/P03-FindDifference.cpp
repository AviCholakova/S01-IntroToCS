#include <iostream>
#include<windows.h>
#include<iomanip>

using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	cout << "Enter a: ";
	double a,b,d,f;
	cin >> a;
	cout << "Enter b: ";
	cin >> b;
	d = a - b;
	cout << "The difference between a and b is: " << d << endl;
	swap(a, b);
	f = a - b;
	cout<<"After swapping the difference is: " << f << endl;
	return 0;


}