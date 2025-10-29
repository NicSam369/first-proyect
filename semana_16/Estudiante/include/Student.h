#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>

class Student
{
    public:
        Student();
        EDID(int age);
        NMID(char m);
        print() const;
        ~Student();

    private:
        char Nombre; //cambialo a char*
        int Edad;
};

#endif // STUDENT_H
