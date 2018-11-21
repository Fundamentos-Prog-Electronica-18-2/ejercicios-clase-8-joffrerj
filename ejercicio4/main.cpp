#include <iostream>
#include <string>

using namespace std;

int main()
{
    string nombre, apellido;
    int edad;
    cout << "Ingrese su nombre: " << endl;
    cin >> nombre;
    cout << "Ingrese su apellido: " << endl;
    cin >> apellido;
    cout << "Ingrese su edad: " << endl;
    cin >> edad;
    if(edad<10){
        cout << nombre << " " << apellido << endl
                << "con: " << edad << " años." << endl
                << "Pertenece al Basica.";
    }else{
        if((edad>=10) && (edad<14)){
            cout << nombre << " "<< apellido << endl
                << "tiene " << edad << " años" << endl
                << "Pertenece al Basica Superior";
        }else{
            if((edad>=14) && (edad<=17)){
            cout << nombre << " "<< apellido << " tiene " << edad << " años" << endl
                << "Pertenece al Bachillerato Unificado";
            }else{
            if(edad>17){
                cout << "Edad fuera de rango.";
            }

            }
        }

    }

    return 0;
}
