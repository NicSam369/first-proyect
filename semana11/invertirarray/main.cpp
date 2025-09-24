#include <iostream>

using namespace std;
/**
implemente una funcion para invertir los
elementos de un arreglo
*/

void recursive_inv(int arr[], int tam, int i = 0){
    if(i>tam){
        return;
    }else{
        int temp= arr[i];
        arr[i] = arr[tam-1];
        arr[tam-1] = temp;
        return recursive_inv(arr, tam-1, i++);
    }
}

void invertir(int arr[], int tam){
    int inic;
    int fin;
    for ( int i = 0, j = tam-1 ; i < j ; i++, j--){//for(int i=0; i < (tam%2); i++ ){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;

    }
}


void print(int arr[],int tam){
    cout << "[ ";
    for (int i = 0; i < tam; i++){
        cout << arr[i] << " ";
    }
    cout << " ]";
}

void intercambiar(int &a, int &b){
     int temp = a;
     a= b;
     b= temp;
}

void invertir_val_recursive(int arr[],int tam, int i =0){
    if(i>tam){
        return;
    }else{
        intercambiar(arr[tam-1], arr[i]);
        return invertir_val_recursive(arr, tam-1, i+1);
    }
}

void invertir_inter(int arr[], int tam){
    for(int i =0, j = tam-1; i<j; i++, j--){
        intercambiar(arr[i], arr[j]);
    }
}


int main()
{
    int arr[5]; // = [10,20,30,40,50];
    arr[0]= 10;
    arr[1]= 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;

    print(arr,5); //[10 20 30 40 50]
    //invertir(arr,5;
    invertir(arr,5); //[50 40 30 20 10]
    recursive_inv(arr,5);
    return 0;
}


