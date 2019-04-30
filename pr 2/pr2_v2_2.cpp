#include "pch.h"
#include <cstdio> 
#include <iostream>
#include <cmath>
#include <locale.h>
#include <conio.h>

using namespace std;

int main()
{
	setlocale(0, "");
	double a, b, t, z;
	cout << "Введите значение a " << endl;
	cin >> a;
	cout << "Введите значение b " << endl;
	cin >> b;
	if (a < b)
	{
		z = sqrt(abs(a*a - b * b));
	}
	if (z = b)
	{
		t = 1 - log10(z) + cos(a*a*b);
	}
	if (z > b)
	{
		t = 1 / (cos(z*a));
	}
	if (z < b)
	{
		t = pow((z + a * a*b), 1 / 3);
	}
	if (a >= b)
	{
		z = 1 - (2 * cos(a)*sin(b));
	}
	cout << "t=" << t << endl;
	cout << "z=" << z << endl;

	_getch();
	return 0;
}