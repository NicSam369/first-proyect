#include <iostream>

using namespace std;

int main()
{
    int c = 10;

    int a = ++c; //primero incrementa y luego asigna

    int b = c++; //primero asigna y luego incrementa

    cout << a << endl;
    cout << c << endl;
    cout << b << endl;
    cout << ++a << endl;
    cout << c-- << endl;


    return 0;
}
