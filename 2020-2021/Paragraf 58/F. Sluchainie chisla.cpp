#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int a, b, n;
    cin >> a >> b >> n;
    
    for (int i = 1; i <= n; i++){
        int n;
        n = a + rand() % (b - a + 1);
        cout << n << ' ';
        
    }

    return 0;
}
