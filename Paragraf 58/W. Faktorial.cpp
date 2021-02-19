#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int number, fak = 1;
    cin >> number;
    
    for (int i = 2; i <= number; i++){
        fak *= i; 
    }
    
    cout << fak << endl;
    return 0;
}
 
 