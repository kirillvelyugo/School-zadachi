#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;
    if (a < 1 || a > 12){
        cout << "NO" << endl;
        return 0;
    }
    
    if (a >= 1 && a <= 2 || a == 12){
        cout << "winter" << endl;
    }
    if (a >= 3 && a <= 5){
        cout << "spring" << endl;
    }
    if (a >= 6 && a <= 8){
        cout << "summer" << endl;
    }
    if (a >= 9 && a <= 11){
        cout << "autumn" << endl;
    }

    return 0;
}
