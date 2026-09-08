// Materia: Programación I, Paralelo 4
// Autor: Carla Daniela Montoya Huaranca 
// Carrera: Ingenieria Biomedica

#include <iostream>
using namespace std;

int main()
{
    int edad;
    char sexo;
    float altura;

    system("cls");

    cout<<"Ingrese su edad: ";
    cin>>edad;

    cout<<"Ingrese su sexo (M/F): ";
    cin>>sexo;

    cout<<"Ingrese su altura en metros: ";
    cin>>altura;

    system("cls");

    cout<<"Datos ingresados"<<endl;
    cout<<"Edad: "<<edad<<endl;
    cout<<"Sexo: "<<sexo<<endl;
    cout<<"Altura: "<<altura<<" metros"<<endl;

    return 0;
}