#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x, y;
    cin >> x >> y;
    
    if ((pow(x, 2) + pow(y, 2) > 4) && (y < x) && (x < 2) && (y > 0)){
        cout << "YES" << endl;
    }else {
        cout << "NO" << endl;
    }
    
    return 0;
}
