#include <iostream>
using namespace std;

int main()
{
    int a[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int m, d, count = 0;
    cin >> m >> d;
    
    if (m < 1 || m > 12){
        cout << -1 << endl;
        return 0;
    }
    if (d < 0 || d > a[m - 1]){
        cout << -1 << endl;
        return 0;
    }
    
    
    for (int i = 11; i >= 0; i--){
        if (m != i + 1){
            count += a[i];
        }else {
            count += a[i] - d;
            cout << count << endl;
            return 0; 
        }
    }
    return 0;
}