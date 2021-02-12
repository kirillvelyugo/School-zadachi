#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x, y, count = 1;
    cin >> x >> y;
    int x_1 = x;
    if (x == 0 || y == 0){
        cout << 0;
        return 0;
    }
    if (y > 0){
        while (count < y){
            x += x_1;
            count++;
        }
        cout << x << endl;
    }else{
       while (count < abs(y)){
            x += x_1;
            count++;
        }
        cout << -x << endl; 
    }
    
    
    return 0;
}
