#include <iostream>
using namespace std;

int main() {
	int a, b, c, max = 0;
	cin >> a >> b >> c;

	if (a == b && b == c){ // все одного возраста
		cout << 0 << endl;
		return 0;
	}

	if (a >= max) { // Находим самого старшего
		max = a;
	}
	if (b >= max) {
		max = b;
	}
	if (c >= max) {
		max = c;
	}

	if (a == max) { // Вывод буквы
		cout << "A ";
	}
	if (b == max) {
		cout << "B ";
	} 
	if (c == max) {
		cout << "C ";
	}

	return 0;
}


