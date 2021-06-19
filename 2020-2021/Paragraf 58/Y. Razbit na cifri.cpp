#include <iostream>
#include <cmath>
using namespace std;

void num(int number){
    if (number == 0){
        return;
    }
    int x = number % 10;
    num(number / 10);
    cout << x << ' ';
}

int main()
{
   int number, numeral;
   cin >> number;
   
   num(number);
   return 0;
}
 
 