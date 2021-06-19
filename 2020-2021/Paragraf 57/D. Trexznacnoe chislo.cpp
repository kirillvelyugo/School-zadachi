#include <iostream>
using namespace std;

int main() {
	int chislo, count = 0;
	cin >> chislo;

	while (chislo > 0) {
		chislo /= 10;
		count++;
	}

	if (count == 3) {
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}
	return 0;
}