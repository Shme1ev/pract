#include "pch.h"
#include <iostream>
#include <math.h>
#include <cmath>
#include <stdio.h>
#include <conio.h>
#include <locale.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	float a, b, c;
	int n;
	cout << "Введите числа a i b: " << endl;
	cin >> a >> b;
	cout << "Выбирете операцию:\n1) a+b\n2) a-b\n3) b-a\n " << endl;
	cin >> n;
	switch (n)
	{
	case 1:
		c = a + b;
		cout << "Ответ: a+b= " << c << endl;
		break;
	case 2:
		c = a - b;
		cout << "Ответ: a-b= " << c << endl;
		break;
	case 3:
		c = b - a;
		cout << "Ответ: b-a= " << c << endl;
		break;
	default:
		cout << "Введен некоректный номер операции! \n";
		break;
	}


	cin.get();
	_getch();
}