// Materia: Programación I, Paralelo 4
// Autor: Carla Daniela Montoya Huaranca 
// Carrera: Ingenieria Biomedica

#include<iostream>

using namespace std;

int main(){
    int x,y,aux;

    cout<<"Digite el valor de x: "; cin>>x;
    cout<<"Digite el valor de y: "; cin>>y;

    /*
    x = 5
    y = 10
    */

    aux = x;
    x = y;
    y = aux;

    cout<<"\nEl nuevo valor de x es: "<<x<<endl;
    cout<<"El nuevo valor de y es: "<<y<<endl;

    return 0;
}