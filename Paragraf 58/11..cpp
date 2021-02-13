#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    for (int n = 100; n <= 9999; n++){
        int sum = 0, p = 3, x = n;
        if (n > 999){
            p = 4;
        }
        while(x != 0){
            sum += pow(x % 10, p);
            x /= 10;
        }
        if (sum == n){
            cout << n << ' ';
        }
    }
    return 0;
}
/*
Числа Армстронга. Натуральное число называется числом Армстронга, если сумма цифр
числа, возведенных в N-ную степень (где N – количество цифр в числе) равна самому числу.
Найдите все трёхзначные и четырёхзначные числа Армстронга. 
*/