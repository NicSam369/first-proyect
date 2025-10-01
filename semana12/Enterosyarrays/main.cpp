#include <iostream>

using namespace std;

/**
El nombre de un arreglo es un puntero al primer elemento del arreglo

    ARITMETICA DE PUNTEROS
        A los punteros se les puede incrementar/decrementar usando los
        operadores ++/--, respectivamente
*/

int main()
{
    int arr[]= {1,2,3,4,5};
    cout << arr << endl;
    cout << &arr[0] << endl;
    cout << &arr[1] << endl;
    cout << &arr[2] << endl;
    cout << &arr[3] << endl;
    cout << &arr[4] << endl;

    int* ptr = arr;
    //ptr = &arr[0] == ptr= arr;
    cout << *ptr << endl; //1 = arr[0]
    ptr++; // arr[0+1]
    cout << *ptr << endl; //2 = arr[1]
    ptr++; // arr[1+1]
    cout << *ptr << endl; //3 = arr[2]
    ptr++; // arr[2+1]
    cout << *ptr << endl; //4 = arr[3]
    ptr++; // arr[3+1]
    cout << *ptr << endl; //5 = arr[4]

    //Por lo tanto, se puede recorrer los elementos de
    //un arreglo usando un puntero

    int* ptr2= arr;
    for(int i = 0; i <5; ptr2++){
        cout<< *ptr2 << " ";
    }
    cout << endl;
    return 0;
}
