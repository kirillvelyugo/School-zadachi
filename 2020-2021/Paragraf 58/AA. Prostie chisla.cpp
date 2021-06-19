#include <iostream>
using namespace std;

int main()
{
    int firstNum, secondNum;
    bool isDetected = false;
    cin >> firstNum >> secondNum;
    
    for (int i = firstNum; i <= secondNum; i++){
        int countDel = 0;
        for (int j = 1; j <= i; j++){
            if (i % j == 0){
                countDel++;
            }
        }
        
        if (countDel == 2){
            cout << i << ' ';
            isDetected = true;
        }
    }
    
    if (!isDetected){
        cout << 0 << endl;
    }
    
    return 0;
}
