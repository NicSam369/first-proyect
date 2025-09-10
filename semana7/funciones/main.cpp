#include <iostream>

using namespace std;

int potencia(int base, int exponente){
    int result =1;
    // for(inicializacion,condicion,incremento)
    for (int i = 0; i< exponente; i++){
        result *= base;

    }
    return result;
}
/**
2  , 4
1
0 < 4
1= 1*2     2
1<4
2 = 2*2      4
2< 4
4 = 4*2      8
3< 4
8= 8*2       16
4<4=false
result= 16
*/

int main()
{

    return 0;
}
