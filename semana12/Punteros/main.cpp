#include <iostream>

using namespace std;

/**
PUNTERO
Es una variable que almacena DIRECCIONES DE MEMORIA de otra variable
del mismo tipo
    Declaracion de puntero
        TIPO_DE_DATO* NOMBRE_DEL_PUNTERO

OPERADOR DE DIRECCION(&)
    Sirve para obtener la direccion de memoria de una variable/objeto
    Operador unario (solo va a tener un operando)
        Ejem: &var --> retorna la direccion de la variable var

OPERADOR DE INDIRECCION(*)
    Sirve para obtener el valor de una direccion de memoria
    Operador unario (solo va a tener un operando)
        Ejem: *ptr --> retorna el valor de la direccion de memoria que tiene ptr

*/

int main()
{
    int* ptr1; //declarando la variable de tipo puntero a entero

    int x; //declarando la variable x
    x = 10; //inicializando la variable de x con el valor 10

    ptr1 = &x;

    cout << "Direccion de la variable x es : " << &x << endl;
    cout << "Direccion de la variable x es : " << ptr1 << endl; //me da el valor de ptr la cual es
                                                               //la direccion de memoria de x
    cout << "El valor de la direccion de la variable ptr1 es: " << *ptr1 << endl; //me da el valor de la direccion de memoria
                                                                                //de ptr,el cual es el valor de x
    //cout << (*ptr1==x? true : false)<< endl;
    // ptr1==&x

    int y = 20;
    ptr1= &y;

    cout << "Direccion de la variable y es : " << ptr1 << endl;
    cout << "El valor de la direccion de la variable ptr1 es: " << *ptr1 << endl;

    int z = 100;
    ptr1 = &z;
    cout << "Direccion de la variable z es : " << ptr1 << endl;
    cout << "El valor de la direccion de la variable ptr1 es: " << *ptr1 << endl;

    int* ptr2;
    ptr2 = &z;
    if(ptr1==ptr2){
        cout << "ptr1 y ptr2 tienen el mismo valor" << endl;
    }
    cout << "Direccion de la variable z es : " << ptr2 << endl;
    cout << "El valor de la direccion de la variable ptr2 es: " << *ptr2 << endl;
    return 0;
}
