#include <iostream>
using namespace std;

int main() {
	int chislo, count = 0;
	cin >> chislo;

	while (chislo != 0) {
		if ((chislo % 10) % 2 == 0) {
			count++;
		}
		chislo /= 10;
	}

	cout << count << endl;
	return 0;
}