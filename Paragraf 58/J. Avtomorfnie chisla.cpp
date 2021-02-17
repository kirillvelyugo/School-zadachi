#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int a, b;
	bool isDetected = false;
	cin >> a >> b;

	for (int i = a; i <= b; i++) {
		int digit = 0, x = i;

		while (x != 0) { // определение разрядности числа
			digit++;
			x /= 10;
		}

		if (i == int(pow(i, 2)) % (int(pow(10, digit)))) {
			isDetected = true;
			cout << i << ' ';
		}

	}

	if (!isDetected) {
		cout << -1 << endl;
	}
	return 0;
}