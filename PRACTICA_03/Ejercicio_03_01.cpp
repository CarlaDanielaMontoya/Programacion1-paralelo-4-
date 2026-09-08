// Materia: Programación I, Paralelo 4
// Autor: Carla Daniela Montoya Huaranca 
// Carrera: Ingenieria Biomedica

#include <iostream>
using namespace std;

int main()
{
    int numero;

    system("cls");

    cout<<"Ingrese un numero del 1 al 10: ";
    cin>>numero;

    if(numero >= 1 && numero <= 10)
    {
        for(int i = 1; i <= 10; i++)
        {
            cout<<numero<<" x "<<i<<" = "<<numero*i<<endl;
        }
    }
    else
    {
        cout<<"Numero fuera de rango"<<endl;
    }

    return 0;
}