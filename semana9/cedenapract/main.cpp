#include <iostream>

using namespace std;

int main()
{
    string cad = "Ciencia de la computacion";
    char car = 'i';
    //contar cuantas veces ese caracter esta en la cadena
    /**cout << "Frase: " << cad;
    char car = '';

    cout << "Ingrese una cadena; ";
    getline(cin,cad)
    */
    int cont=0;
    for (int i = 0; i<cad.length(); i++){
        if (cad.at(i) == car){
            cont++;
            }
    }
    cout << cont;

    //cout << cad.at(5) << endl;
    //letra.length()

    //Da una cadena y verificar si aquella cadena es un palindromo
    string cadena = "reconocer";
    int c = 0;
    int longitudcad= cadena.length()-1; //8
    for(int i = 0;i<((cadena.length())/2);i++){
            if (cadena.at(i)==cadena.at(longitudcad)){
            c=c+1;
            longitudcad= longitudcad - 1;
        }
    }
    cout <<((c%2==0) ? "Si" : "No");
//9*/

    return 0;
}
