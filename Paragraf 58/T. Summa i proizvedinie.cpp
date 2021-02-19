#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, sum = 0, mul = 1;
    cin >> n;
    
    while (n != 0){
        int num; 
        cin >> num;
        
        sum += num;
        mul *= num;
        n--;
    }
    
    cout << sum << ' ' << mul;
    return 0;
}
 
 