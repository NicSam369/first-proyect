#include <iostream>

using namespace std;

/**
Recursividad: cuando una funcion se llama a si misma

Factorial
n! = n * (n-1=!
          5! = 5* (4)!
                    4!= 4 * (3)!
                            3!= 3 * (2)!
                                    2!= 2* (1)!
                                            1
*/

long long factorial (long n) {
          /**
          Primero se define el caso
          Posteriormente se define el paso recursivo
          */
          if (n==1)
            return 1;
          else
            return n* factorial(n-1);

          }
/**
Fibonacci
    fib(n) = fib(n-1) + fib(n-2)
        fib(0) = 1
        fib(1) = 1

    1 1 2 3 5 8 13 21 ...
    0 1 1 2 3 5 8 13 21 ...
*/
long long fibonacci(long n){
    if(n==0 || n == 1)
        return 1;
    else
        return fibonacci(n-1) + fibonacci(n-2);

}
/**
long long fib(long n){
    if(n== 1)
        return 1;
    else if(n==0)
        return 0;
    else
        return fibonacci(n-1) + fibonacci(n-2);

}
*/
/**
Dar un numero y que el programa me diga cuantos
digitos tiene
1984 / 10= 198
198/10= 19
19/10 = 1
1/10 = 0.1

*/

long long NumDig(long n){
  if (n<10)
    return 1;
  else
      return 1 + NumDig(n/10);
}

/**
Dado un numero ver si es capicua(numeros) == palindromo(cadenas)
123321

*/

bool EsCapicua(int n){
    long m = n;
    if (n < 10)
        return true;
    else{
        if (m/(10*(NumDig(n))) == n%(10))
            return true && EsCapicua (n/(10*(NumDig(n)))%10); //ponerlo el 10 a la potencia de el numero de digitos
        else
            return false;
    }
}
int main()
{
    cout << factorial(4) << endl;
    cout << fibonacci(7) << endl;
    //cout << fib(5) << endl;
    cout << NumDig(1234) << endl;
    cout << EsCapicua(123321) << endl;
    return 0;
}
