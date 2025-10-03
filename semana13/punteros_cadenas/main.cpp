#include <iostream>

using namespace std;

int contcaract(char *ptr, int car){
    int cont=0;
    while( *ptr !='contraslash0'){
        if(*ptr == car)
            cont++;

    }
}

int main()
{
    char cad[] = "Ciencia de la computacion";
    cout << contcaract(cad,'i') << endl;
    return 0;
}
