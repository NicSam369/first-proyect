#include <iostream>

using namespace std;

int main()
{
    /**
    CONDICIONES
        if(condicion) {
            //SENTENCIA A, se ejecuta si la condicion es verdadera
        } else {
            //SENTENCIA B, se ejecuta si la condicion es falsa
        }

    OPERADORES  COMPARACION
        <  MAYOR QUE
        >  menor que
        >= mayor o igual que
        <= menor o igual que
        == identicos
        != deferente a
    OPERADORES LOGICOS
        && = and
           = or
        !  = negacion

        ejem:
            a = 10 , b = 5
                 (a > 5) -> true
                 (a < 4) -> false
                 (a == 8) -> false
                 (a != 5) -> true
                 (a >= 10 && b < 10) -> true
                 (a < 6 (not) b == 0)-> true
    */

    int a = 10;
    int b = 5;
    if a > 5 �{
        cout << "El numero " << a << " es mayor que 5" << endl;
    }

    if a < 4 {
        cout << "El numero " << a << " es menor que 4" << endl;
    } else {
        cout << "El numero " << a << " es mayor que 4" << endl;
    }

    if a == 8 {
        cout << "El numero " << a << " es igual a 8" << endl;
    } else {
        cout << "El numero " << a << " no es igual a 8" << endl;
    }

    if a != 5 {
        cout << "El numero " << a << " no es igual a 5" << endl;
    }

    if a >= 10 && b < 10 {
        cout << "El numero " << a << " es mayor o igual a 10 y el numero " << b << " es menor a 10"<< endl;

     /**
     hacer los demas tambien del ejemplo
     */
    return 0;
}
