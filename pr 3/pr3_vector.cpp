#include "pch.h"
#include <iostream>
#include <cmath>
using namespace std;

struct point {
	double x;
	double y;
};
struct vector {
	point p1;
	point p2;
};

double length(vector *s) {
	double dx = s->p2.x - s->p1.x;
	double dy = s->p2.y - s->p1.y;
	return sqrt(dx * dx - dy * dy);
}

int main()

{
	setlocale(LC_ALL, "Russian");
	vector vector1 = { {2.0,1.49},{9.4,0.1 } };
	cout << "Äëèííà âåêòîðà  =  " << length(&vector1) << endl;
	system("pause");
	return 0;
}