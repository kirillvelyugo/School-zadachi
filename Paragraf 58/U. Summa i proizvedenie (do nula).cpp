#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int numbers, sum = 0, mul = 1;
    
    cin >> numbers;
    while (numbers != 0){ 
        sum += numbers;
        mul *= numbers;

        cin >> numbers;
    }
    
    cout << sum << ' ' << mul;
    
    return 0;
}
 
 