#include <iostream>

using namespace std;

int main()
{
    /**impremente un prograna que solicite un numero por teclado
    e indique si dicjo numero es un numero primo
    */
    int num;
    int c = 0;
    int d = 1;
    cout << "Ingrese un numero: ";
    cin >> num;


    while (d <= num){
        if (num % d == 0){
            c = c + 1;
        }
        d = d +1;
    }
    if (c==2) {
        cout << num << " es un numero primo" << endl;
    } else {
        cout << num << " no es un numero primo" << endl;
    }

    /**
    Implemente un programa que solicite un numero por teclado
    e imprime los numeros primos menores que dicho numero
    */
    int n = 2;
    d=1;
    c=0;

    while (n<=num){
        d = 1;
        c= 0;
        while (d<=n){
            if (n%d==0){
                c=c+1;
            }
            d = d + 1;
        }
        if (c==2){
            cout << n << " ";
        }
        n = n + 1;

    }

    return 0;
}
