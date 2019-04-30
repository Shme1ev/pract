#include <iostream>
#include <string>
using namespace std;

class Animal {
protected:
	string name;
	int age;
};

class Cat:public Animal {
public:
	Cat(string q, int w) {
		q = name;
		w = age;
	}

};
class Dog :public Animal {
public:
	Dog(string q, int w) {
		q = name;
		w = age;
	}

};
class Parrot :public Animal {
public:
	Parrot(string q, int w) {
		q = name;
		w = age;
	}

};


class figura{
protected:
	int angles;
};

class chitiri:public figura {
public: chitiri() { angles = 4; }
};
class romb :public chitiri {
public:
	int a;
	int b;
	romb(int q, int w) {
		a = q;
		b = w;
	}
};
class prim : public chitiri {
public:
	int a;
	prim(int q) {
		a = q;
	}
};


class sredstvoezdi{
protected:
	string mark;
	int date;
};

class car : public sredstvoezdi {
public:
	car(string a, int b) {
		mark = a;
		date = b;
	}
};
class bus :public sredstvoezdi {
public:
	bus(string a, int b) {
		mark = a;
		date = b;
	}
};
class bicycle :public sredstvoezdi {
public:
	bicycle(string a, int b) {
		mark = a;
		date = b;
	}
};


class screen{
protected:
	int razmera;
	int razmerb;
};
class keyboard {
protected:
	int kolichestvoknopok;
};

class notebook :public screen, public keyboard{
public:
	notebook (int q, int w, int e) {
		razmera= q;
		razmerb= w;
		kolichestvoknopok = e;
	};
};
class computer :public screen, public keyboard {
public:
	computer(int q, int w, int e) {
		razmera= q;
		razmerb= w;
		kolichestvoknopok = e;
	}
};
class phone :public screen, public keyboard {
public:
	phone(int q, int w, int e) {
		razmera= q;
		razmerb= w;
		kolichestvoknopok = e;
	}
};

int main(){
    
    return 0;
}
© 2019 GitHub, Inc.