#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double chislo, answ;
    cin >> chislo;
    
    answ = chislo * chislo * chislo * chislo * chislo * chislo * chislo * chislo * chislo * chislo;
    
    cout << fixed << setprecision(3) <<answ << '\n';
    return 0;
}
