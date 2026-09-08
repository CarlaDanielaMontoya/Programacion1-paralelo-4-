// Materia: Programación I, Paralelo 4
// Autor: Carla Daniela Montoya Huaranca 
// Carrera: Ingenieria Biomedica 
#include <iostream>
using namespace std;

int main()
{
    int numero, digito, cantidad=0, suma=0;

    system("cls");

    cout<<"Ingrese un numero entero positivo: ";
    cin>>numero;

    while(numero > 0)
    {
        digito = numero % 10;
        suma = suma + digito;
        cantidad = cantidad + 1;
        numero = numero / 10;
    }

    cout<<"Cantidad de digitos: "<<cantidad<<endl;
    cout<<"Suma de los digitos: "<<suma<<endl;

    return 0;
}