#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int numbers, max, min;
    cin >> numbers;
    
    min = numbers;
    max = numbers;
    
    while (numbers != 0){
        if (numbers > max){
            max = numbers;
        }
        if (numbers < min){
            min = numbers;
        }
        cin >> numbers;
    }
    
    cout << min << ' ' << max << endl;
    return 0;
}
 
 