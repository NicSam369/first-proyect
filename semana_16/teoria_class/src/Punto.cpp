#include "Punto.h"

Punto::Punto()
{
    x=0;
    y=0;
    std::cout << "Llamando al constructor" << std::endl;
}

//Punto::print(int x_, int y_)
//{
  //  x= x_;
    //y= y_;
    //std::cout << "Llamando al constructor con arg."<<std::endl;

//}
Punto::~Punto()
{
    std::cout << "Llamando al destructor" << std::endl;
}

//void Punto::print() const {
//    std::cout << "(" << x << ", " << y << ")";
//}
