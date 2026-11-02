#include <iostream>
#include<windows.h>
#include<iomanip>
int main()
{
    SetConsoleOutputCP(1251);
    double a = 2.3;
    double b = 3.7;
	double p = 2 * (a + b);
	double s = a * b;
    std::cout << "Периметърът на правоъгълника е: " << p << std::endl;
    std::cout << "Лицето на правоъгълника е: " << s << std::endl;
	system("pause>0");
	return 0;
}