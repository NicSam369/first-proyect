#include <iostream>

using namespace std;

int main()
{
    /**
    break: rompe el bucle
    */
    int i = 1;

    cout << "\n\nProbando la sentencia ¨break¨" << endl;
    while(1<10){
        if (i==5) {
            break;
        }
        cout << i << endl;
        i = i + 1;
        }
    /**
    Continue: salta a la siguiente iteracion
    */
    i=0;
    cout << "\n\nProbando la sentencia ¨continue¨" << endl;
    while (i < 10) {
        i=i+1;
        if (i==5){
            continue;
        }
        cout << 1 << endl;
    }
    return 0;
}
