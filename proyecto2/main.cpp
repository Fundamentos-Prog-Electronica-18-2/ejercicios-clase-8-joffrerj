#include <iostream>

using namespace std;

int main()
{
    cout << "Resoluci�n de una ecuaci�n de primer grado" << endl;
    double a = 1;
    double b = 0;
    double resultado = 0;

    if(a!=0){
        resultado = -b/a;
        cout << "El resultado es : " << resultado << endl;
    }else{
        if(b!=0){
            cout << "Soluci�n imposible" << endl;
        }else{
            cout << "Soluci�n indeterminada" << endl;
        }
    }
    return 0;
}
