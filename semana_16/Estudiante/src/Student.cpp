#include "Student.h"

Student::Student()
{
    std::cout << "LLamando constructor" << std::endl;
}

Student::EDID(int age)
{
    Edad=age;
    std::cout << "Edad agregada" << std::endl;
}

Student::NMID(char m)
{
    Nombre=m;
    std::cout << "Nombre agregado" << std::endl;
}

Student::print() const
{
    std::cout << "Nombre: " << Nombre << std::endl;
    std::cout << "Edad: " << Edad << std::endl;
}

Student::~Student()
{
    std::cout << "Llamando destructor" << std::endl;
}

