#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int numFirst, numSecond, count = 0;
    cin >> numFirst >> numSecond;
    
    while (numFirst != 0 && numSecond != 0){
        if (numFirst > numSecond){
            numFirst %= numSecond;
        }else {
            numSecond %= numFirst;
        }
        count++;
    }
    
    cout << numFirst + numSecond << ' ' << count;
    return 0;
}
 
 