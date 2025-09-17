#include <iostream>

using namespace std;
int numerodecad(char car){
        string cad;
        cout << "Ingrese una cadena: ";
        getline(cin,cad);
        int cont=0;
        for (int i = 0; i<cad.length(); i++){
            if(cad.at(i) == car){
                cont++;
            }
    }
    return cont;
    }

/**string CadenaESPalindromo(sring cadena){
//string cadena = "reconocer";
    int c = 0;
    int longitudcad= cadena.length()-1; //8
    for(int i = 0;i<((cadena.length())/2);i++){
            if (cadena.at(i)==cadena.at(longitudcad)){
            c=c+1;
            longitudcad= longitudcad - 1;
        }
    }
    return((c%2==0) ? "Si" : "No");
}
*/
//funcion que intercmabia valores
void Changeval(int &a , int &b){
    int temp = a
    a = b;
    b = temp;
    return 0;
}
int main()
{
    cout << numerodecad('i') << endl;
    int x = 10;
    int y = 20;
    Changeval(x,y);
    cout << x << endl;
    cout << y << endl;
    return 0;
}
