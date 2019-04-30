#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

struct Book {
	string book_name;
	string author;
	int publication_date;
	int pages;
	bool hard_binding;

	void print_name() {
		cout << book_name << endl;
	}
};

int main()
{
	setlocale(LC_ALL, "Russian");
	Book book1 = { "Êàïèòàíñêàÿ äî÷êà", "Ïóøêèí ", 1967, 500, true };
	book1.print_name();
	system("pause");
	return 0;
}