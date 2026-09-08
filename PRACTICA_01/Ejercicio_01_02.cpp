// Materia: Programación I, Paralelo 4
// Autor: Carla Daniela Montoya Huaranca 
// Carrera: Ingenieria Biomedica

#include <iostream>
using namespace std;

int main()
{
    float precio, precioFinal;

    system("cls");

    cout<<"Ingrese el precio del producto: "<<endl;
    cin>>precio;

    precioFinal = precio+(precio*0.13);

    cout<<"El precio con IVA (13%) es: "<<precioFinal<<endl;

    return 0;
}