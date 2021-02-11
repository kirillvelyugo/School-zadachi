#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x, y;
    cin >> x >> y;
    
    if (y < 2 - pow(x, 2) && (y > 0 || y > x)){
        cout << "YES" << endl;
    }else {
        cout << "NO" << endl;
    }
    
    return 0;
}
