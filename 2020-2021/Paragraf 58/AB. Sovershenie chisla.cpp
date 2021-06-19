#include <iostream>

using namespace std;

int main()
{
    int chislo, sum = 0;
    bool isSov= false;
    cin >> chislo;
    
    for (int i = 1; i < chislo; i++){
        if (chislo % i == 0){
            sum += i;
        }
    }
    
    if (sum == chislo){
        isSov = true;
        for (int i = 1; i < chislo; i++){
            if (chislo % i == 0){
                cout << i << ' ';
            }
        }
    }
    
    if (!isSov){
        cout << 0 << endl;
    }

    return 0;
}
