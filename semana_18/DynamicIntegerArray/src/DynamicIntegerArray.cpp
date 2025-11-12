#include "DynamicIntegerArray.h"

DynamicIntegerArray::DynamicIntegerArray()
{
    this ->sizeArray=0;
    this -> data = new int [sizeArray];
}

DynamicIntegerArray::DynamicIntegerArray(int arr[], int sizeArray){
    this ->sizeArray=sizeArray;
    this -> data = new int [sizeArray];
    for(int i=0; i< sizeArray; i++){
        this -> data[i]= arr[i];
    }
}

DynamicIntegerArray::DynamicIntegerArray(DynamicIntegerArray &o)
{
    this ->sizeArray= o.sizeArray;
    this->data= new int[sizeArray];
    for(int i=0; i< sizeArray; i++){
        this ->data[i]= o.data[i];
    }
}

int DynamicIntegerArray::getSize() const{
    return sizeArray;
}

void DynamicIntegerArray::print() const{
    std::cout << "[ ";
    for(int i =0; i< sizeArray; i++){
        std::cout << this -> data[i] << " ";
    }
    std::cout << " ]";
}

void DynamicIntegerArray::pushback(int val){
    int *tmp =new int[sizeArray+1];
    for(int i = 0;  i < sizeArray ; i++){
        tmp[i]= this -> data[i];
    }
    tmp[sizeArray] = val;
    sizeArray++;
    delete [] data;
    this ->data = tmp;
}

DynamicIntegerArray::~DynamicIntegerArray()
{
    delete [] data;
}
