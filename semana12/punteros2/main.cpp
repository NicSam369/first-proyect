#include <iostream>

using namespace std;

int main()
{
    int* ptr1;
    //cout << *ptr1 << endl; // no imprime nada ya que imprime el valor
                             // de la direccion de memoria pero no tiene
    int x= 10;
    ptr1=&x;
    cout << *ptr1 << endl;

    *ptr1=1000; //mdifica el valor de la direccion de memoria, por lo
                //tanto el valor de x tambien se modifica
    cout << "x: " << x << endl;

    int* ptr2 = &x;
    *ptr2=5000;
    cout << "x: " << x << endl;
    cout << "ptr1: " << *ptr1 << endl;
    cout << "ptr2: " << *ptr2 << endl;
//ejercicio
    double d1 = 5.9;
    double* ptrd = &d1;
   // ptrd = &d1;
    cout << "d1: " << d1 << endl;
    *ptrd = 13.9;
    cout << "d1: " << d1 << endl;
//

    return 0;
}
