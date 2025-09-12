#include <iostream>

using namespace std;

/**
  Una fucnion que determine si es primo o no lo es
*/

bool esPrimo(int n){
    for (int i = 2; i*i<=n; i++){
        if (n%i==0){
            return false;
            }
        }
    return true;
}


int EsPrimo (int n){
    int contador = 0;
    for (int divisor = 1; divisor<=n; divisor++){
        if (n%divisor == 0){
            if contador>=3 {
                return false
            } else{
                contador++;
                }
        }
    }
    return True;
}


bool EsPrimoONo (int n){
    int contador = 0;         //cuantos divisores tiene el numero
    int resultado = true;
    for (int divisor = 1; divisor<=n; divisor++){
        if (n%divisor == 0){
                contador++;
        }
    }
    if (contador==2){
        resultado==true;
        return resultado;
    }else{
        resultado==False,
        return resultado;
    }

}

void ImprimirEsPrimo (int n){
   int i =2;
    while(i<n){
        if(esPrimo(i)){
            cout << i << " ";
            i**;
        }
        cout << endl;
    }
}

/**
Impremente una funcion que reciba un entero y que returne
el numero de digitos que tiene dicho entero
*/
3456
int ObtNumDig(long long n){
    int c=0;
    while(n>0) {
        n = n/10;
        c++;
    }
    return c;
}


int main()

    cout << ObtNumDig(24678);

    return 0;
}

