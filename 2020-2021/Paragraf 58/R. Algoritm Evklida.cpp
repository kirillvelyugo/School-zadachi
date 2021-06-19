#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int numFirst, numSecond, count = 0;
    cin >> numFirst >> numSecond;
    
    while (numFirst != numSecond){
        count++;
        if (numFirst > numSecond){
            numFirst -= numSecond;
        }else {
            numSecond -= numFirst ;  
        }
    }
    
    cout << numSecond << ' ' << count + 1;
    return 0;
}
 
 