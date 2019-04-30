#include "pch.h"
#include <iostream>
#include <cmath>
использование пространства имен std;

Свойство класса {
защищенный:
    int ценность;
общественности:
    Свойство (int q): ценность (q) {};
    виртуальный int nalog () = 0;
};

Квартира класса: общественная собственность {
общественности:
   int nalog () {
        возвращаемая стоимость / 1000;
    }
    Квартира (int w = 0): Недвижимость (w) {
    }
};
Автомобиль класса: общественная собственность {
общественности:
    int nalog () {
        возврат стоимости / 200;
    }
    Car (int w = 0): свойство (w) {
    }
};
Класс CountryHouse: Общественная собственность {
общественности:
    int nalog () {
        возвращаемая стоимость / 500;
    }
    CountryHouse (int w = 0): свойство (w) {
    }
};

классовая база {
общественности:
    виртуальный void retur ();
    виртуальный int calc (int a);
    виртуальная пустота dx ();
    виртуальная база * copy () = 0;
};

класс минусы: общественная база {
общественности:
    void retur () {
		cout << "x = const" << endl;
	}
	int calc (int a) {
		возврат 1;
	}
	void dx () {
		cout << "f '(x) = 0" << endl;
	}
	base * copy () {
		база * ф = новые минусы;
		возврат f;
	}
};
класс на: общественная база {
общественности:
	void retur () {
		cout << "f (x) = x" << endl;
	}
	int calc (int x) {
		возврат х;
	}
	void dx () {
		cout << "f '(x) = 1" << endl;
	}
	base * copy () {
		база * ф = новый пер;
		возврат f;
	}
};
класс suma: общественная база {
общественности:
	void retur () {
		cout << "f (x) = (x + 1) ^ 2" << endl;
	}
	int calc (int x) {
		возврат (х + 1) * (х + 1);
	}
	void dx () {
		cout << "f '(x) = 2 * x + 2" << endl;
	}
	base * copy () {
		база * ф = новая сума;
		возврат f;
	}
};
класс раз: общественная база {
общественности:
	void retur () {
		cout << "f (x) = 2 * xx" << endl;
	}
	int calc (int x) {
		вернуть 2 * х - х;
	}
	void dx () {
		cout << "f '(x) = 1" << endl;
	}
	base * copy () {
		база * ф = новый раз;
		возврат f;
	}
};
класс умн: общественная база {
общественности:
	void retur () {
		cout << "f (x) = (x + 1) ^ 2" << endl;
	}
	int calc (int x) {
		возврат (х + 1) * (х + 1);
	}
	void dx () {
		cout << "f '(x) = 2 * x + 2" << endl;
	}
	base * copy () {
		база * ф = новый ум;
		возврат f;
	}
};
класс del: общественная база {
общественности:
	void retur () {
		cout << "f (x) = 4x ^ 2 / x ^ 3" << endl;
	}
	int calc (int x) {
		возврат (4 * х * х) / (х * х * х);
	}
	void dx () {
		cout << "f '(x) = 4 / x ^ 2" << endl;
	}
	base * copy () {
		base * f = new del;
		возврат f;
	}
};
класс si: общественная база {
общественности:
	void return_Fun () {
		cout << "f (x) = sin (x)" << endl;
	}
	int res (int x) {
		вернуть грех (х);
	}
	void dx () {
		cout << "f '(x) = cos (x)" << endl;
	}
	base * copy () {
		база * f = новый si;
		возврат f;
	}
};
класс co: общественная база {
общественности:
	void return_Fun () {
		cout << "f (x) = cos (x)" << endl;
	}
	int calc (int x) {
		вернуть cos (x);
	}
	void dx () {
		cout << "f '(x) = -sin (x)" << endl;
	}
	base * copy () {
		база * f = новый сотрудник;
		возврат f;
	}
};
класс ex: общественная база {
общественности:
	void return_Fun () {
		cout << "f (x) = exp (x)" << endl;
	}
	int calc (int x) {
		возврат опыта (х);
	}
	void dx () {
		cout << "f '(x) = exp (x)" << endl;
	}
	base * copy () {
		база * F = новый бывший;
		возврат f;
	}
};
класс ln: общественная база {
общественности:
	void return_Fun () {
		cout << "f (x) = Ln (x)" << endl;
	}
	int calc (int x) {
		возврат журнала (х);
	}
	void dx () {
		cout << "f '(x) = 1 / x" << endl;
	}
	base * copy () {
		база * f = новый ln;
		возврат f;
	}
};


int main (int argc, const char * argv []) {
 Свойство * обр [7];
 arr [0] = новая квартира (1000000);
 arr [1] = новая квартира (1100000);
 arr [2] = новая квартира (1200000);
 arr [3] = новый автомобиль (1000000);
 arr [4] = новый автомобиль (1100000);
 arr [5] = новый CountryHouse (1000000);
 arr [6] = новый CountryHouse (1100000);
    для (int i = 0; i <7; i ++) {
 cout << "Налог:" << arr [i] -> nalog () << "\ n";
    }
    
    вернуть 0;
}