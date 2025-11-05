#include "MyString.h"
#include <iostream>

MyString::MyString(char *arr)
{
    int cont=0;
    for(int i=0; arr[i] != '/0'; i++){
        cont++;
    }
    this -> sizeString = cont;

    this -> data = new char[cont+1];
    for(int i=0; arr[i] != '/0' ; i++){
        this ->data[i]=arr[i];
    }
    this ->data[cont]='/0';

}
//copiar,hallartamaño
int MyString::getSize() const
{
    return sizeString;
}
char* MyString::getData() const
{
    return this -> data;
}

void MyString::toLower(){
    for(int i =0; i < sizeString;i++){
        if(data[i] <= 90&& data[i]>=65 ){
            data[i] +=32;
        }
    }

}

void MyString::toUpper(){

    for(int i =0; i < sizeString;i++){
        if(data[i] <= 122 && data[i]>= 97 ){
            data[i] -=32;
        }
    }

}


MyString::~MyString()
{
    delete [] data;
}
