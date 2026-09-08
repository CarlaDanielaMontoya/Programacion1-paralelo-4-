// Materia: Programación I, Paralelo 4
// Autor: Carla Daniela Montoya Huaranca 
// Carrera: Ingenieria Biomedica

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int numeroAleatorio;
    int numero;
    int intentos = 0;

    srand(time(0));

    numeroAleatorio = (rand() % (100 - 1 + 1)) + 1;

    cout<<"Ingrese un numero entre 1 y 100: ";
    cin>>numero;

    while(numero != numeroAleatorio)
    {
        intentos = intentos + 1;

        if(numero < numeroAleatorio)
        {
            cout<<"El numero ingresado es menor"<<endl;
        }
        else
        {
            cout<<"El numero ingresado es mayor"<<endl;
        }

        cout<<"Intente nuevamente: ";
        cin>>numero;
    }

    intentos = intentos + 1;

    cout<<"Adivinaste el numero"<<endl;
    cout<<"Numero de intentos: "<<intentos<<endl;

    return 0;
}