#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;

	for (int i = a; i <= b; i++) {
		cout << i << '*' << i << '=' << pow(i, 2) << endl;
	}

	return 0;
}