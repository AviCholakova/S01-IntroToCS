#include <iostream>
#include<windows.h>
#include<iomanip>

using namespace std;
int main()
{
	cout << "Enter mark: " << endl;
	double mark;
	cin >> mark;

	if (mark == 2)
	{
		cout << "bad";
	}
	else if (mark == 3)
	{
		cout << "medium";
	}
	else if (mark == 4)
	{
		cout << "good";
	}
	else if (mark == 5)
	{
		cout << "very good";
	}
	else if (mark == 6)
	{
		cout << "excelent";
	}
	else
	{
		cout << "This is not a mark";
	}
}