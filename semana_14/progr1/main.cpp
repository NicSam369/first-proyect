#include <iostream>

using namespace std;

int sumArray(int *ptr, int tam){
    int sum=0;
    for(int i =0; i< tam ; sum+=ptr[i++]);
    return sum;
}

int sumArrayRec(int *ptr, int tam){
    if(tam==0){
        return 0;
    }
    return *ptr + sumArrayRec(++ptr, --tam);
}

/**
Implementar un algoritmo de ordenamiento Burbujita
*/

void intercambio(int a, int b){
    int tmp=a;
    a=b;
    b=a;
    return;
}


void Burbujita(int *ptr, int tam){
    for(int i =0; i < tam; i++){
        for(int j =0; j < tam-1-i; j++){
            if(ptr[j]>ptr[j+1]){
                intercambio(ptr[j],ptr[j+1]);
            }
        }
    }
    return;
}

/**
insertionsort
Mergesort
Quicksort
*/


void print(int *ptr[], int tam){
    for(int i =0; i <tam; i++, ptr++){
        cout << ptr[i] << " ";
    }
    return;
}

int main()
{
    int tam = 5;
    int *ptr = new int[tam];
    for(int i =0; i< tam; i++){
        ptr[i]=i;
    }
    for(int i =0; i< tam; i++){
        cout << ptr[i] << " ";
    }
    cout << endl;
    cout << sumArray(ptr,tam) << endl;
    cout << sumArrayRec(ptr,tam) << endl;

    delete[] ptr;

    int* ptr1= new int[3];
    ptr1[0]=2;
    ptr1[1]=1;
    ptr1[2]=3;

    Burbujita(ptr1,3);
    print(ptr1,3);

    return 0;
}
