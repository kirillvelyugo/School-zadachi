#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int> a = {0, 1, 1}; 
    int n;
    cin >> n;
    
    for (int i = 3; i <= n; i++){
        a.push_back (a[i - 2] + a[i - 1]); 
    }
    
    for (int i = 1; i <= n; i++){
        cout << a[i] << ' ';
    }
    return 0;
}
