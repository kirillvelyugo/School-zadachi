#include <iostream>
using namespace std;

void printString(int n) {
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cout << "*";
		}
		cout << endl;
	}
}

int main()
{
	int n;
	cin >> n;
	printString(n);

	return 0;
}
