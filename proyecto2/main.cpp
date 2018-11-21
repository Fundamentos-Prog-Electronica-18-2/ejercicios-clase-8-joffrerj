#include <iostream>

using namespace std;

int main()
{
    cout << "Resolución de una ecuación de primer grado" << endl;
    double a = 1;
    double b = 0;
    double resultado = 0;

    if(a!=0){
        resultado = -b/a;
        cout << "El resultado es : " << resultado << endl;
    }else{
        if(b!=0){
            cout << "Solución imposible" << endl;
        }else{
            cout << "Solución indeterminada" << endl;
        }
    }
    return 0;
}
