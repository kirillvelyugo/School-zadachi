#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double rad, plos, dlina;
    double pi = 3.14159265358979323846;
    cin >> rad;
    
    plos = pi * rad * rad;
    dlina = 2 * pi * rad;
    
        
    cout << fixed << setprecision(3) << plos << '\n' << dlina << '\n';
    
    return 0;
}
