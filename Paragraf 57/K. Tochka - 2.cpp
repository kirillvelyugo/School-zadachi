#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x, y;
    cin >> x >> y;
    
    if (y > 0 && y < 0.5 && y < sin(x) && x < 3.141592653589793 && x > 0){
        cout << "YES" << endl;
    }else {
        cout << "NO" << endl;
    }
    
    return 0;
}
