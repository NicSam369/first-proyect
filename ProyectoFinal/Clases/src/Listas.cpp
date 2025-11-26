#include "Listas.h"
#include <iostream>

Listas::Listas()
{
    GuardarUsuarios=nullptr;
    espacioU=0;
}
void Listas::AgregarUsuario(Usuario* o){
   /** if(o == nullptr){
            return;
    }
    int lugar;
    if(o->getTipo()==1){
        lugar=0;
    } else if (o->getTipo()==2){
        lugar=1;
    } else {
        lugar=2;
    }
    if(GuardarUsuarios == nullptr){
        espacioU++;
        GuardarUsuarios = new Usuario*[3];
        GuardarUsuarios[lugar] = o;
    } else {
        Usuario ** tmpUsuario = new Usuario[3];
        for(int i =0; i < 3; i++){
            tmpUsuario[i] = new Usuario[espacioU + 1];
        }
        for(int i =0; i < 3; i++){
            for(int j = 0; j < espacioU+1; j++){
                if(i==lugar && j==espacioU){
                    tmpUsuario[i][j] = ; //corregir D:\ccomp2-2\ProyectoFinal\Clases\src\Listas.cpp|33|error: no match for 'operator=' (operand types are 'Usuario' and 'Usuario*')|
                } else {
                    tmpUsuario[i][j] = GuardarUsuarios[i][j];
                }
        }
        if(espacioU==1)
            delete [] GuardarUsuarios;
        else {
            for(int i =0; i < 3; i++){
                    delete []GuardarUsuarios[i];
            }
            delete []GuardarUsuarios[i];
            GuardarUsuarios = tmpUsuario;
            espacioU++;
        }
    }
    */
}


void Listas::printUsuarios() const {
    std::cout << "Usuarios Premium" << std::endl;
    for(int i = 0; i < espacioU; i++){
        if(GuardarUsuarios[i]->getTipo() == 2){
            GuardarUsuarios[i]->print();
        }
    }

    std::cout << "Usuarios Preferenciales" << std::endl;
    for(int i = 0; i < espacioU; i++){
        if(GuardarUsuarios[i]->getTipo() == 3){
            GuardarUsuarios[i]->print();
        }
    }

    std::cout << "Usuarios Normales" << std::endl;
    for(int i = 0; i < espacioU; i++){
        if(GuardarUsuarios[i]->getTipo() == 1){
            GuardarUsuarios[i]->print();
        }
    }
}

Listas::~Listas()
{
    //dtor
}
