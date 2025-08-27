#include <iostream>

using namespace std;

int main()
{
    /**
    tabla ascii
    para caracter se usan comilla simples = ''
    para cadenas se usan las otras= ""
    casteo= conversion de tipos (static_cast)

    '1' en caracter su valor numerico es 49, por el codigo ascii o tabla ascii
    ahora le ponemos '6' y si lo casteo sale: 54,  ahora quiero obtener el 6,
    el valor en entero
    si al ascii de 5 le resto el ascii de 0 es 5
    el ascii de 3 - el ascii de 0 es 3
    entonces cambiamos el A por el 6 y hacemos la resta
    */

    char car = '6'; //car = caracter

    int val = static_cast<int>(car);
    cout << sizeof(car) << endl;

    int result = val - '0';
    cout << "El valor entero es: " << val << endl;
    cout << result << endl;

    return 0;
}
