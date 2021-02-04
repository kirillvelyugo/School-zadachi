#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main()
{
    int a, b, z;
    cin >> a >> b;
    for (int i = 1; i <= 5; i++){
        z = a + rand() % (b - a);
        cout << z << ' ';
    }
    
    
    return 0;
}
