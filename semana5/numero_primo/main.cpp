#include <iostream>

using namespace std;

int main()
{
    /**impremente un prograna que solicite un numero por teclado
    e indique si dicjo numero es un numero primo
    */
    int num;
    cout << "Ingrese un numero: ";
    cin >> num;


    while (divisor < num){
    /**    divisor = divisor + 1;
        if (num % divisor == 0){
            cout << num << "No es un numero primo";
            break
        } else {
            cout << num << " es un numero primo"
        }
    }
    */

    /**
    Implemente un programa que solicite un numero por teclado
    e imprime los numeros primos menores que dicho numero
    */
    int numero;
    cout << "Ingrese un numero: ";
    cin >> numero;

    int d=1, c = 1;

    while ((c <= numero ) && (numero >= 0)) {
        if ( numero % d == 0)
            cout << numero << " es un numero primo" << " ";
        }
        d = d + 1

    /**
    Tarea para el viernes
    */

    return 0;
}
