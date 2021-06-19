#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    
    cout << a << '+' << b << '+' << c << '=' << a+b+c << '\n';
    cout << a << '*' << b << '*' << c << '=' << a*b*c << '\n';
    cout << '('<<a << '+' << b << '+' << c << ')' << '/' << '3' << '=' << fixed << setprecision(3) <<(a+b+c)/3.0 << '\n';

    return 0;
}
