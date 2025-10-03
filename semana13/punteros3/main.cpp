#include <iostream>

using namespace std;

int main()
{
    int arr[] = {1,2,3,4,5};
    cout << *arr+0 << " ";
    cout << *arr+1 << " ";
    cout << *arr+2 << " ";
    cout << *arr+3 << " ";
    cout << *arr+4 << endl;;
    cout << endl;

    cout << "-------------------for------------------" << endl;

    int* ptr2=arr;
    for(int i = 0; i<5; i++, ptr2++){
        cout << *ptr2 << " ";
    }
    cout << endl;

    int *ptr3= arr+4;
    for(int i = 0; i<5; i++, ptr3--){
        cout << *ptr3 << " ";
    }
    cout << endl;

    cout << "-------------------while------------------" << endl;
    int *ptr4= arr;
    int i = 0;
    while(ptr4<(arr+5)){
        cout<< *ptr4 << " ";
        ptr4++;
    }
    cout<<endl;

    int *ptr5= arr+4;
    while(ptr5>=arr){
        cout<< *ptr5 << " ";
        ptr5--;
    }
    cout << endl;
    //para pares e impares que solo imprima eso y de mayor a menor
    //int *ptr6= arr;
    //while(ptr6%)
    return 0;
}
