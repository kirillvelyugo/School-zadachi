#include <iostream>
using namespace std;

void printString(int n) {
	for (int i = 1; i <= n; i++) {
		cout << "-";
	}
}

int main()
{
	int n;
	cin >> n;
	printString(n);

	return 0;
}
