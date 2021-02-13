#include <iostream>
#include <string>
using namespace std;

int main()
{
/*    bool isCorrect = false;
    int num;
    cin >> num;
    string s = to_string(num);
    
    for (int i = 0; i < s.size(); i++){
        if (s[i] == s[i + 1]){
            isCorrect = true;
        }
    }
    
    if (isCorrect){
        cout << "YES" << endl;
    }else {
        cout << "NO" << endl;
    }
    
    return 0;
*/
    int num;
    cin >> num;
    
    while (num > 0){
        int x = num % 10;
        int y = (num % 100) / 10;
        if (x == y){
            cout << "YES" << endl;
            return 0;
        }
        num /= 10;
    }
    
    cout << "NO" << endl;
    return 0;
}
/*
Напишите программу, которая определяет, верно ли, что введённое число содержит две
одинаковых цифры, стоящие рядом (как, например, 221).
*/