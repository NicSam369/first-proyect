#include <iostream>
#include <cmath>

using namespace std;

class Punto{
    public:
        int x;
        int y;
        void print(){
            cout << "(" << x << " , " << y << ")" << endl;
        }
        void modificar(int _x, int _y){
            x = _x;
            y = _y;
        }
/**        void distancia(int p2_x, int p2_y){
            float distanciap1_p2= sqrt( pow((p2_x - x),2)+ pow((p2_y-y),2));
            cout << distanciap1_p2 << endl;
        }
*/
};

float distancia(Punto p1, Punto p2){
    return sqrt( pow((p2.x - p1.x),2)+ pow((p2.y-p1.y),2));
}

int main()
{
    //0,0
    int p1_x= 0;
    int p1_y= 0;
    Punto p1;
    p1.x=0;
    p1.y=0;
    p1.print();

    //3,4
    int p2_x= 3;
    int p2_y= 4;
    Punto p2;
    p2.x=3;
    p2.y=4;
    p2.print();

    //float distancia = sqrt( pow((p2_x - p1_x),2)+ pow((p2_y-p1_y),2));
    //cout<< distancia << endl;

    cout << distancia(p1,p2) << endl;

    p1.modificar(1,1);
    p1.print();
    p2.modificar(5,5);
    p2.print();
    cout << distancia(p1,p2) << endl;

    //p1.modificar(0,0);
    //p1.distancia(3,4);

    return 0;
}
