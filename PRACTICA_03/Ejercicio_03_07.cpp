// Materia: Programación I, Paralelo 4
// Autor: Carla Daniela Montoya Huaranca 
// Carrera: Ingenieria Biomedica

#include <iostream>

using namespace std;

int main()
{
    int numero;
    int suma = 0;

    system("cls");

    cout<<"Ingrese un numero: ";
    cin>>numero;

    for(int i = 1; i < numero; i++)
    {
        if(numero % i == 0)
        {
            suma = suma + i;
        }
    }

    if(suma == numero)
    {
        cout<<"El numero es perfecto"<<endl;
    }
    else
    {
        cout<<"El numero no es perfecto"<<endl;
    }

    return 0;
}