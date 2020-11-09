// Lab 5.1.cpp
// Михайлов Олександр
// Функції, що містять арифметичний вираз
// Варіант 24

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double f(const double a) {
	return ((a * a + 1) / (sin(a) * sin(a) + 1));
}

int main()
{
	double x, y;

	cout << "Enter x: "; cin >> x;
	cout << "Enter y: "; cin >> y;

	double c = (f(3) + f(x + 1) + 1) / (1 - f(y + 1) * f(y + 1));
	cout << "C = " << c << endl;

	cin.get();
	return 0;
}
