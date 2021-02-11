#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x, y;
    cin >> x >> y;
    
    if (pow(x, 2) + pow(y, 2) < 1 && (y < x || y > -x)){
        cout << "YES" << endl;
    }else {
        cout << "NO" << endl;
    }
    
    return 0;
}
