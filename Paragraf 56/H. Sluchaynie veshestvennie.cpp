#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

int main()
{
    double a, b, z;
    cin >> a >> b;

    for (int i = 1; i <= 5; i++){
        z = a + (b-a)*rand()/RAND_MAX;
        cout << fixed << setprecision(3) << z << endl;
    }
    return 0;
}
