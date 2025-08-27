#include <iostream>

using namespace std;

int main()
{
    /**
        Los tipos de datos para manejar enteros son:
            - short (en memoria RAM ocupa 2 bytes)
            - int = long (en memoria RAM ocupa 4 bytes)
            - long long (en memoria RAM ocupa 8 bytes)
    */
    /**
    long long val1 = 10;
    cout << sizeof(val1) << endl;
    */


    unsigned short val1 = 32766;   //solo el unsigned va hacer que tome positivos ya no negativos
    //y si ahora le ponemos 65534 en vez del 32766 va a sumarlo y cuando llegue a su limite sera 0
    cout << "El valor es " << val1 << endl;
    val1 = val1 + 1;
    cout << "El valor es " << val1 << endl;
    val1 = val1 + 1;
    cout << "El valor es " << val1 << endl;

    /**
        SHORT
            2 bytes
        1 byte = 8 bits
        2 bytes = 16 bites

        2 en binario es -> 010
        3 wn binaria es -> 011
        4 en binario es -> 100
        ...
        10 en binario es -> 1010
        ...
        255 -> 11111111
        256 -> 00000001 00000000
        ...
        65535 -> 11111111 11111111

    */

    return 0;
}
