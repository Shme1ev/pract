
#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

struct Group_of_students {
	string group_id;
	int admission_year;
	int count_of_students;
	string students[30];
};

int main(int argc, char const *argv[])
{
	setlocale(LC_ALL, "Russian");
	Group_of_students group1 = { "ÈÍÁÎ-03-18", 2018, 30,
		{"Êðàêîâñêèé Åãîð", "Èëüÿ Øìåëåâ", "Àëåêñåé Àíèñèìîâ", "Èâàí Øåãóòà"}
	};
	cout << "Ãðóïïà " << group1.group_id << " áûëà çàíåñåíà â áàçó." << endl;
	system("pause");
	return 0;
}