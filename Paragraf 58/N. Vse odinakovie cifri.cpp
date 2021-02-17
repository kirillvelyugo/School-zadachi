#include <iostream>
using namespace std;

int main()
{
    int num, temp_last;
    bool isRep = true;
    cin >> num;

    int last = num % 10;

    while (num != 0) {
        temp_last = num % 10;
        if (last != temp_last) {
            isRep = false;
        }
        num /= 10;
    }

    isRep ? cout << "YES" << endl : cout << "NO" << endl;
    return 0;
}
