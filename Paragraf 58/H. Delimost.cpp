#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    for (int i = a; i <= b; i++){
        int x = i;
        bool isCorrect = true;
        while (x != 0){
            if (x % 10 == 0 || i % (x % 10) != 0){
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
