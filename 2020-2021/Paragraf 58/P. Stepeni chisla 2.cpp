#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    bool isDetected = false;
    cin >> n;
    
    for (int i = n; i >= 2; i--){
        if (i % 2 == 0){
            cout << int(pow(2, i)) << ' '; 
            isDetected = true;
        }
    }
    
    if(!isDetected){
        cout << 0 << endl;
    }
    
    return 0;
}
