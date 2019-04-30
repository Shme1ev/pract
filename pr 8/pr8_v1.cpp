#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int odin(){
    setlocale(LC_ALL, "Russian");
	ifstream q;
	q.open("file.txt");
	if (q.is_open()) {
		string a;
		while (!q.eof()) {
			q >> a;
			cout << a << endl;
		}
		q.close();
	}
	else {
		cout << "С файлом возникли проблемы." << endl;
	}
	return 0;
};
int dwa(){
    string c;
    setlocale(LC_ALL, "Russian");
	ofstream q;
	q.open("file.txt");
	cout<<"Начните ввод.\n";
	cin >> c;
	q << c;
	q.close();
	return 0;
};

int main() {
    int r;
    cout << "Какой вариант?.";
	cin >> r;
	if (r == 1) odin();
	if (r == 2) dwa();
	system("pause");
	return 0;
}