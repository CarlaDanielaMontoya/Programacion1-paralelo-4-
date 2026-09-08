// Materia: Programación I, Paralelo 4
// Autor: Carla Daniela Montoya Huaranca 
// Carrera: Ingenieria Biomedica
#include <iostream>
using namespace std;

int main()
{
    int nota;

    system("cls");

    cout<<"Ingrese una nota entre 0 y 100: ";
    cin>>nota;

    while(nota < 0 || nota > 100)
    {
        cout<<"Nota invalida. Ingrese nuevamente: ";
        cin>>nota;
    }

    cout<<"Nota registrada correctamente"<<endl;

    return 0;
}