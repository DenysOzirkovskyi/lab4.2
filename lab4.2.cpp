// lab4.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//Lab_4..cpp
//Озірковського Дениса Леонідовича
//Лабораторна робота №4.2
/* Табуляція функції, заданої
формулою: функція однієї змінної*/
//Варіант 11
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double x, xp, xk, dx, A, B, y;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |"
		<< setw(7) << "y" << " |" << endl;
	cout << "---------------------------" << endl;
	x = xp;
	while (x <= xk)
	{
		A = 2*abs(5-x);
		if (x <= -1)
			B = exp(abs(2 + x));
		else
			if (x > -1 && x < 1)
				B = sin(1 / abs(2 + x)) * sin(1 / abs(2 + x));
			else
				B = cos(x) * cos(x) / (1 + abs(sin(x)));
		y = A + B;
		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << y
			<< " |" << endl;
		x += dx;
	}
	cout << "---------------------------" << endl;
	return 0;
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
