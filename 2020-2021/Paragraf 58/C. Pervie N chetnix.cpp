#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, chislo = 2;
    cin >> n;
    
    for (int i = 0; i < n; i++){
        cout << chislo << ' ';
        chislo += 2;
    }
    return 0;
}
