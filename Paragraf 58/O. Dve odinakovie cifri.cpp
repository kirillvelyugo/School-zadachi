#include <iostream>
using namespace std;

int main()
{
    int num, count = 0;
    cin >> num;

    int temp_num = num;

    while (num != 0) {
        int lastChar = num % 10;

        while (temp_num != 0) {
            if (lastChar == temp_num % 10) {
                count++;
            }
            temp_num /= 10;
        }
        
        if (count >= 2) {
            cout << "YES" << endl;
            return 0;
        }

        count = 0;
        temp_num = num;
        num /= 10;
    }

    cout << "NO" << endl;

    return 0;
}