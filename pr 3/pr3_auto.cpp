#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

struct Auto {
	string brand;
	string model;
	string energy_type;
	int year;
	int max_speed;
};

int main(int argc, char const *argv[])
{
	Auto auto1 = { "Lada", "2109", "Gas", 1980, 180 };
	Auto auto2 = { "Bmw", "I8", "Electro+fuel", 2018, 312 };
	system("pause");
	return 0;
}