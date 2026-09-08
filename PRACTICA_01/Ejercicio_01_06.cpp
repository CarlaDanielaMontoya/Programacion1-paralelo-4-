// Materia: Programación I, Paralelo 4
// Autor: Carla Daniela Montoya Huaranca 
// Carrera: Ingenieria Biomedica

#include <iostream>
using namespace std;

int main()
{
    int numero;

    system("cls");

    cout<<"Ingrese un numero entero: ";
    cin>>numero;

    if(numero % 2 == 0)
    {
        cout<<"El numero es par"<<endl;
    }
    else
    {
        cout<<"El numero es impar"<<endl;
    }

    return 0;
}