#include <iostream>
using namespace std;

int main() {
	int chislo, sum = 0;
	cin >> chislo;

	while (chislo != 0) {
		sum += chislo % 10;
		chislo /= 10;
	}

	cout << sum << endl;
	return 0;
}