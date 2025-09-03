#include <iostream>

using namespace std;

int main()
{
    /**
    BUCLE WHILE
            while(CONDICION) {
                instrucciones1
                instrucciones2
                ...
                instruccionesn
            }

    */
    int i = 0;
    while(i<=10) {
        cout << i << endl;
        i = i + 1;
    }

    i = 9;
    while (i>=1) {
        cout << i << endl;
        i = i - 1;
    }

    //multiplos de 3 menores a 100
    i = 1
    while(i < 100) {
        if ( i % 3 == 0 ) {
            cout << i << " ";
        }

        i = i + 1
    }
    return 0;
}
