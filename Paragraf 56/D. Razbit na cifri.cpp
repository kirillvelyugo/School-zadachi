#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    int chislo, fr, sc, th;
    cin >> chislo;
    
    th = chislo % 10;
    sc = (chislo / 10) % 10;
    fr = chislo / 100;
    
    cout << fr << ' ' << sc << ' ' << th;
    
}
