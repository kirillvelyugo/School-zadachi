#include <iostream>
using namespace std;

int main() {
	int a, b, c, max = 0;
	cin >> a >> b >> c;

	if (a == b && b == c){ // ��� ������ ��������
		cout << 0 << endl;
		return 0;
	}

	if (a >= max) { // ������� ������ ��������
		max = a;
	}
	if (b >= max) {
		max = b;
	}
	if (c >= max) {
		max = c;
	}

	if (a == max) { // ����� �����
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


