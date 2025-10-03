#include <iostream>

using namespace std;

void printArray(int *arr, int size){
    cout << "[ ";
    for( int i = 0; i< size ; i++, arr++)
        cout << *arr << " ";
    cout << "]" << endl;
}
void intercambio(int *a, int *b){
    int tmp= *a;
    *a=*b;
    *b=tmp;
}
/**
Implemente una funcion para invertir los elementos de un array
*/
void invertirArray(int *ini, int *fin){ //arr, arr+tam-1
    while(ini<fin){
        intercambio(ini++,fin--);
    }
}
void recurintvArray(int *ini, int *fin){
    if(ini>=fin)
    {
        return;
    }else {
        intercambio(ini,fin);
        return recurintvArray(++ini,--fin);
    }
}
/**void invtArray(int *ini, int *fin, int tam){ //arr, arr+tam-1
    for(int i =0; i< fin ; --fin, ++ini,i++){
        int tmp= *ini;
        *ini = *fin;
        *fin = tmp;
    }

}
*/
int main()
{
    int arr[]= {1,2,3,4,5};
    int tam = sizeof(arr) / sizeof(arr[0]);
    printArray(arr,tam); //le esta enciando una direccion de memoria
                         //(al primer elemento) no el arreglo

    int x= 10;
    int y = 20;

    intercambio(&x,&y); //pide direcciones de memoria y yo le debo
                        //dar direcciones de memoria
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    invertirArray(arr,arr+tam-1);
    printArray(arr,tam);
    recurintvArray(arr,arr+tam-1);
    printArray(arr,tam);
    //invtArray(arr,arr+tam-1, tam);
    //printArray(arr,tam);
    return 0;
}
