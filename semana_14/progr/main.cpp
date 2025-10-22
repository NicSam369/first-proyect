#include <iostream>>

using namespace std;

/**
    OPERADOR new
        Sirve para reservar memoria de una variable/objeto
    OPERADOR delete
        Sirve para liberar la memoria de una variable/objeto

*/
/**
01
int* fun(){
    int x = 10;
    return &x;
}
*/
int* fun(){
    int *ptr= new int;
    *ptr=10;
    return ptr;
}
int main()
{
    /**
    00
    int *ptr;
    if(true){
        int x = 10;
        ptr= &x;
        //cout << x << endl; //aca si existe x
    }
    cout << *ptr << endl; //10
    //cout << x << endl; //da error por qu x solo existe dentro del if
    */

    /**
    01
    int *ptr=fun();
    cout << *ptr << endl; //la direccion de memoria es indeterminada
                          //por que x no existe fuera de esa funcion
    //con new y delete puedo controlar essa memoria faltante
    */

    int *ptr = fun();
    cout << ptr << endl;
    delete ptr;
    return 0;
}
