#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;

    while (num > 0) {
        int x = num % 10;
        int y = (num % 100) / 10;
        if (x == y) {
            cout << "YES" << endl;
            return 0;
        }
        num /= 10;
    }

    cout << "NO" << endl;

	return 0;
}