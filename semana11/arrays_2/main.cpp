#include <iostream>

using namespace std;


 long sumar(int arr[], int tam){
    int sum = 0;
    for(int i = 0; i< tam; sum += arr[i++])
        ;
    return sum;
 }

 long sumarR(int arr[], int tam){
    if(tam==0){
        return 0;
    }else{
        return arr[tam-1] + sumarR(arr, tam-1);
    }
 }


int main()
{
    int arr[5];
    arr[0]=10;
    arr[1]= 20;
    arr[2]= 30;
    arr[3]= 40;
    arr[4]= 50;

    cout << sumar(arr,5) << endl;
    cout << sumarR(arr,5) << endl;
    return 0;
}
