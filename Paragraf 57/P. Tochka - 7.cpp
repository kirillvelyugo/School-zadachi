#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x, y;
    cin >> x >> y;
    
    if ((y < 2 * pow(x, 2) && y > 1 - x && x > 0 && x < 1) || (y > 2 * pow(x, 2) && y > 1 - x && x < 1)){
        cout << "YES" << endl;
    }else {
        cout << "NO" << endl;
    }
    
    return 0;
}
