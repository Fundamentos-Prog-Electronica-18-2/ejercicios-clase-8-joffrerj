#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a, b, c;
    double suma, producto;
    int operacion;

    cout << "Ingrese 3 valores: " << endl;
    cin >> a;
    cin >> b;
    cin >> c;
    cout << "Ingrese una opci�n: " << endl
        << "Para realizar la suma ingrese: 1 .. Para realizar la multiplicaci�n ingrese: 2" << endl;
    cin >> operacion;

    switch(operacion){
        case 1:
            cout << "La suma de los n�meros es: " << suma << endl;
            suma=(a+b+c);
            break;
        case 2:
            cout << "El producto de los n�meros es: " << producto << endl;
            producto=(a*b*c);

            break;
    }
}
