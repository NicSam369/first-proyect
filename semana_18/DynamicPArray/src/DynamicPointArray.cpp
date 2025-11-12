#include "DynamicPointArray.h"

DynamicPointArray::DynamicPointArray()
{
    this->sizeArray=0;
    this ->data= new Point[sizeArray];
}

DynamicPointArray::DynamicPointArray(int arr[], int sizeA)
{
    this -> sizeArray= sizeA;
    this -> data = new Point[sizeArray];
    for(int i = 0; i < sizeArray; i++){
        this -> data[i] = arr[i];
    }

}

DynamicPointArray::DynamicPointArray(DynamicPointArray &o)
{
    this -> sizeArray= o.sizeArray;
    this -> data = new Point[sizeArray];
    for(int i = 0; i < sizeArray; i++){
        this -> data[i] = o.data[i];
    }

}

void DynamicPointArray::print()const{
    std:cout << "( ";
    for(int i =0; i < sizeArray; i++){
        this ->data[i].print();
        std::cout << " ";
    }
    std::cout << " )";
}

DynamicPointArray::~DynamicPointArray()
{
    //dtor
}
