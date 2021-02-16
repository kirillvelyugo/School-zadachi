#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int a, b, c, d;
    bool isDetected = false;
    cin >> a >> b >> c >> d;
    
    for (int i = 10000; i <= 99999; i++){
        if (i % a == b && i % c == d){
            cout << i << ' ';
            isDetected = true;
        }
    }
    if (!isDetected){
        cout << -1 << endl;
    }
    return 0;
}
