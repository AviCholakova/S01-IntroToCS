#include <iostream>
#include<Windows.h>
#include<iomanip>

int main()
{
	SetConsoleOutputCP(1251);
	double m;
	std::cout << "Въведете стойност за m: ";
	std::cin >> m;
	double s = m * m;
	std::cout << "Лицето на квадрата е: " << s << std::endl;
	double p = 4 * m;
	std::cout << "Периметърът на квадрата е: " << p << std::endl;
	
}
