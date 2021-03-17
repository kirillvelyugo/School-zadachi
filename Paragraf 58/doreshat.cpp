#include <iostream>
#include <vector>
using namespace std;

int findInVector(const vector<int>& a, int x) {
    // если x есть, то возращаешь его позицию
    // если x нет, то возращаешь -1
    for (int i = 0; i < a.size(); i++){
        if (a[i] == x){
            return i;
        }
    }
    return -1;
}

int main()
{
    // вектор с остатками
    vector<int> remains;
    // вектор с целыми частями
    vector<int> intPart; 
    
    int numFirst, numSecond;
    cin >> numFirst >> numSecond;

    while (numFirst != 0 || findInVector(remains, numFirst) == -1){
        intPart.push_back ((numFirst * 10) / numSecond);
        remains.push_back ((numFirst * 10) % numSecond);
        numFirst = (numFirst * 10) % numSecond;
    }
    
    cout << 0 << ',';
    for (int i = 0; i < intPart.size(); i++){
        cout << intPart[i];
    }
    return 0;
}