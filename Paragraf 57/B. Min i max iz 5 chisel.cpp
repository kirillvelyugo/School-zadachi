#include <iostream>
using namespace std;

int main()
{
    int a, max = 0, min;
    
    for (int i = 1; i <=5; i++){
        cin >> a;
        if (i == 1){
            min = a;
            max = a;
        }
        if (a > max){
            max = a;
        }
        
        if (min > a){
            min = a;
        }
    }
    
    cout << min << '\n' << max;
    return 0;
}
