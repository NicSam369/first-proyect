#include <iostream>

using namespace std;

void intercambio(int a, int b){
    int tmp= a;
    a=b;
    b=a;
    return;
}

void Burbujita(int arr[], int tam){
    for(int i=0; i< tam; i++){
        for(int j=0; j < tam-1-i; j++){
            if(arr[j]>arr[j+1]){
                    intercambio(arr[j], arr[j+1]);
            }
        }
    }
    return;
}

void print(int arr[], int tam){
    cout<< endl;
    for(int i=0; i < tam; i++){
        cout<< arr[i] << " ";
    }
}

int main()
{
    int arr[]={2,3,1};
    print(arr, 3);
    Burbujita(arr,3);
    print(arr,3);
    //calcular la distancia de dos puntos en un plano
    return 0;
}
