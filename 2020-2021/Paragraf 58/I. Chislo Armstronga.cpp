#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int a, b;
	bool isDetected = false;
	cin >> a >> b;

	for (int i = a; i <= b; i++) {
		int sum = 0, p = 0, x = i;

		while (x != 0) { // определение в какую степень необходимо возводить
			p++;
			x /= 10;
		}

		x = i;
		while (x != 0) {
			sum += pow(x % 10, p);
			x /= 10;
		}

		if (sum == i) {
			isDetected = true;
			cout << i << ' ';
		}



	}
	if (!isDetected) {
		cout << -1 << endl;
	}
	return 0;
}