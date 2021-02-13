#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    for (int i = 1; i <= n; i++){
        int x = i;
        bool isCorrect = true;
        while (x != 0){
            if (x % 10 != 0 && i % (x % 10) != 0){
                isCorrect = false;
            }
            x /= 10;
        }
        if (isCorrect){
            cout << i << ' ';
        }
    }

    return 0;
}
/*
Напишите программу, которая вводит натуральное число N и выводит на экран все натуральные числа,
не превосходящие N и делящиеся на каждую из своих цифр. 

*/