#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    /**
    Escribe un programa que pida un numero que puede tener desde 3-9 digitos
    y evalue si dicho numero es un palindromo
    ej:
    13331 ->  es un palindromo
    123445 -> no es un palindromo
    1234321 -> es un palindromo
    */
    /**
    usando while y for tarea casa este y el de los numeros primos
    */
    //123456789
    long n;
    cout << "Ingresa un numero de 3-9 digitos ";
    cin >> n;


    int numcar = n;
    int numdigit=0;

    while (numcar > 0){
        numcar /= 10;
        numdigit++;

    }
    while (n != 0){
        int ini = n / pow(10, numdigit-1);
        int fin = n % 10;
        if (ini != fin){
            cout << "NO es palindromo" << endl;
            break;
            }
        n= (n % static_cast<int>(pow(10,numdigit -1)))/10;
        cout << ini << endl;
        cout << fin << endl;

    }

    cout <<n << endl;

       //int val_in = n / (10*numcar) // hacer el n entre el 10 elevado al numero de caracteres
    return 0;
}
