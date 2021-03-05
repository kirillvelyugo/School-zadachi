#include <iostream>
#include <string>
using namespace std;

int main()
{
    int firstType, secondType, thirdType, n, count = 0;
    string answer = "";
    cin >> firstType >> secondType >> thirdType >> n;
    
    for (int i = 0; i <= n / firstType; i++){
        for (int j = 0; j <= n / secondType; j++){
            for (int h = 0; h <= n / thirdType; h++){
                if (i * firstType + j * secondType + h * thirdType == n){
                    count++;
                    answer += to_string(i) + ' ' + to_string(j) + ' ' + to_string(h) + "\n";
                }
            }
        }   
    }
    
    
    cout << count << endl;
    cout << answer << endl;
    

    return 0;
}