#include <iostream>

using namespace std;

int main()
{
    /**impremente un prograna que solicite un numero por teclado
    e indique si dicjo numero es un numero primo
    */
    long long num, d=2, c=0;
    cout << "Ingrese un numero: ";
    cin >> num;

    while (d <= num){
        if (num == 2){
            cout << num << "es primo" << end;
        }
        else if (num % d == 0){
            c = c + 1;
        }
        d = d +1;
    }
    cout << ((c==2) ? "primo" : "no primo");

    /**
    Implemente un programa que solicite un numero por teclado
    e imprime los numeros primos menores que dicho numero
    */
    long long n = 2;

    while (n<=num){
        d = 1;
        c= 0;
        while (d<=n){
            if (n%d==0){
                c=c+1;
            }
            d = d + 1;
        }
        cout << ((c==2) ? "n" :"n" );
        n = n + 1;
    }


    //Otra solucion
    long long n, i = 2, d= 0;
    while (i*i <= n){
        if (n%i==0){
            d++;
            break;
        }
        i++;
    }
    cout << (d==0) ? "primo" : "no primo";

    long long n, j=2, d=0, i=2, cin >>n;
    while(j<=n){
        while(i*i <= j){
            if (j%i==0){
                d++:
                break;
        }
        i**;
        if(d==0){
            cout << j << " ";
        }
        d=0, i=2;
        j++;
    }

    return 0;
}
