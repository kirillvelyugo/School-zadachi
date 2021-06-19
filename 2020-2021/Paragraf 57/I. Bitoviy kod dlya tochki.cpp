#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x, y;
    cin >> x >> y;
    
    if (y <= 1){ //#1
        cout << 1;
    }else {
        cout << 0;
    }
    if (y <= -x){ //#2
        cout << 1;
    }else {
        cout << 0;
    }
    if (pow((x), 2) + pow((y), 2) <= 1){ //#3
        cout << 1;
    }else {
        cout << 0;
    }
    if (pow((x - 1), 2) + pow((y), 2) <= 1){ //#4
        cout << 1;
    }else {
        cout << 0;
    }
    
    return 0;
}
