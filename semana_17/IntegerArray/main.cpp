#include <iostream>
#include "DynamicIntegerArray.h"
using namespace std;

int main()
{
    DynamicIntegerArray dia;
    cout << dia.getSize() << endl;
    dia.print();
    cout << endl;
    int arr[] = {1,2,32,43,45};
    DynamicIntegerArray dia2(arr,5);
    cout << dia2.getSize()<< endl;

    return 0;
}
