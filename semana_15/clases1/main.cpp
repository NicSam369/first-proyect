#include <iostream>
#include <cmath>

using namespace std;

class Punto{
    private:
        int x;
        int y;
    public:
        Punto(){    //constructor
            x=0;
            y=0;
        }
        Punto(int _x, int _y){   //constructoor
            x=_x;
            y=_y;
        }

        int getX() const {    //const -> su valor no se puede cambiar después de la inicialización
            return x;
        }
        int getY() const {
            return y;
        }
        void print(){
            cout << "(" << x << " , " << y << ")" << " " ;
        }
        void modificar(int _x, int _y){
            x = _x;
            y = _y;
        }
};

class VectorGeometrico{
        Punto ini;
        Punto fin;
    public:
        VectorGeometrico(Punto p1, Punto p2){
            ini=p1;
            fin=p2;
        }

        void print(){
            ini.print();
            cout << " ->  ";
            fin.print();
        }
        float modulo(){
            return sqrt(pow(fin.getX()-ini.getX(),2)+ pow(fin.getY()-ini.getY(),2));
        }
};


int main()
{
    /**VectorGeometrico vg;
    vg.ini.x=0;
    vg.ini.y=0;
    vg.fin.x=3;
    vg.fin.y=4;

    vg.print();
    vg.modulo();
    */

    Punto p1;
    Punto p2(3,4);
    VectorGeometrico vg(p1,p2);
    vg.print();
    cout << endl;
    cout << vg.modulo();

    return 0;
}
