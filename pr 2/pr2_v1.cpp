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
	float a, b, n, m;
	cout << "Введите значение a " << endl;
	cin >> a;
	cout << "Введите значение b " << endl;
	cin >> b;
	if (a >= b)
	{
		n = pow(a, 1.0 / 3.0)*(a - b);
	}
	if (a < b)
	{
		n = pow(a, 2) + (a - b / sin(a*b));
	}
	if (n < b)
	{
		m = n + a / -b + sqrt(pow(sin(a), 2) - cos(n));
	}
	if (n == b)
	{
		m = pow(b, 2) + tan(n*a);
	}
	if (n > b)
	{
		m = pow(b, 3) + n * pow(a, 2);
	}
	cout << "n=" << n << endl;
	cout << "m=" << m << endl;

	_getch();
	return 0;
}