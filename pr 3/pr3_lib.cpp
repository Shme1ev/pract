
#include "pch.h"
#include <iostream>
using namespace std;

struct Library {
	string author;
	string name;
	int year;
	int number;
	string language;
}
;
void returnnn(Library library) {
	setlocale(LC_ALL, "Russian");
	cout << "Àâòîð: " << library.author << endl;
	cout << "Íàçâàíèå: " << library.name << endl;
	cout << "Ãîä âûïóñêà: " << library.year << endl;
	cout << "Êîë-âî ñòðàíèö: " << library.number << endl;
	cout << "ßçûê: " << library.language << endl << endl;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	Library chralz = { "×àðëüç Áóêîâñêèé ","Ïåðâàÿ êðàñòîêà â ãîðîäå", 1914, 500, "Eng" };
	Library tolstoi = { "Ëåâ Òîëñòîé"," Âîéíà è ìèð", 1769, 1335, "Rus" };

	returnnn(chralz);
	returnnn(tolstoi);

	return 0;
}