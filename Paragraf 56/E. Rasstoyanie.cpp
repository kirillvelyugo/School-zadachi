#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double x1, y1, x2, y2, ras;
    cin >> x1 >> y1 >> x2 >> y2;
    
    ras = sqrt(pow((x1 - x2),2) + pow((y1 - y2), 2));
    
    cout << fixed << setprecision(3) << ras;
    
}
