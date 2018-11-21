#include <iostream>

using namespace std;

int main()
{
    int numero;
    int limite;
    int opcion;
    int contador = 1;
    int operacion = 0;

    cout << "Tabla de multiplicar o de Sumar" << endl;
    cout << "Para la tabla de multiplicar ingrese: 1 .. Para la tabla de suma ingrese: 2 " << endl;
    cin >> opcion;

    cout << "Ingrese el número a operar: " << endl;
    cin >> numero;
    cout << "Ingrese el límite: " << endl;
    cin >> limite;

    if(opcion=1){
      while(contador <= limite){

        operacion = numero * contador;
        cout << numero <<" * " <<contador <<" = " << operacion << endl;
        contador = contador + 1;
        }
        }else{
        if(opcion=2){
            while(contador <= limite){

        operacion = numero + contador;
        cout <<numero <<" + " <<contador <<" = " << operacion << endl;
        contador = contador + 1;
        }
        }else{
        cout << "Opción incorrecta";
        }
        }
    return 0;
}
