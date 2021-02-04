#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double x, y, answ;
    cin >> x >> y;
    
    answ = pow(x, y);
    
    cout << fixed << setprecision(3) << answ;
    return 0;
}
