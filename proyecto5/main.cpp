#include <iostream>

using namespace std;

int main()
{
    cout << "Ejemplo de switch" << endl;
    int dia_semana = 0;
    cout << "Ingrese el día de la semana" << endl;
    cin >> dia_semana;

    switch(dia_semana){
        case 1:
            cout << "Su día es Lunes" << endl;
            break;
        case 2:
            cout << "Su día es Martes" << endl;
            break;
        case 3:
            cout << "Su día es Miércoles" << endl;
            break;
        case 4:
            cout << "Su día es Jueves" << endl;
            break;
        case 5:
            cout << "Su día es Viernes" << endl;
            break;
        case 6:
            cout << "Su día es Sábado" << endl;
            break;
        case 7:
            cout << "Su día es Domingo" << endl;
            break;

        default:
            cout << "No hay día que mostrar..." << endl;
            cout << "... ingrese un valor entre ..." << endl;
            cout << "1 y 7" << endl;
    }
    return 0;
}
