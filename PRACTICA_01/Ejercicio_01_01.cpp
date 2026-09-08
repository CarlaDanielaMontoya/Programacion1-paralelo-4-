// Materia: Programación I, Paralelo 4
// Autor: Carla Daniela Montoya Huaranca 
// Carrera: Ingenieria Biomedica
// ejercicio 1 

#include <iostream>
using namespace std;

int main()
{
    int año;

    system("cls");

    cout<<"Ingrese un año de 4 digitos: ";
    cin>>año;

    if (año % 400 == 0)
    {
        cout<<"El año es bisiesto."<<endl;
    }
    else if (año % 100 == 0)
    {
        cout<<"El anño NO es bisiesto."<<endl;
    }
    else if (año % 4 == 0)
    {
        cout<<"El año es bisiesto."<<endl;
    }
    else
    {
        cout<<"El año NO es bisiesto."<<endl;
    }

    return 0;
}

// ejercicio 2 
/ Materia: Programación I, Paralelo 4
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

// ejercicio 3 
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

// ejercicio 4 
// Materia: Programación I, Paralelo 4
// Autor: Carla Daniela Montoya Huaranca 
// Carrera: Ingenieria Biomedica

#include <iostream>
using namespace std;

int main()
{
    float practica, teoria, participacion, notaFinal;

    system("cls");

    cout<<"Ingrese la nota de practicas: ";
    cin>>practica;

    cout<<"Ingrese la nota teorica: ";
    cin>>teoria;

    cout<<"Ingrese la nota de participacion: ";
    cin>>participacion;

    notaFinal=(practica*0.30)+(teoria*0.60)+(participacion*0.10);

    system("cls");

    cout<<"La nota final es: "<<notaFinal<<endl;

    return 0;
}

// ejercicio 5 

// Materia: Programación I, Paralelo 4
// Autor: Carla Daniela Montoya Huaranca 
// Carrera: Ingenieria Biomedica
#include <iostream>
using namespace std;

int main()
{
    int dia;

    system("cls");

    cout<<"Ingrese un numero del 1 al 7: ";
    cin>>dia;

    switch(dia)
    {
        case 1:
            cout<<"Lunes"<<endl;
            break;

        case 2:
            cout<<"Martes"<<endl;
            break;

        case 3:
            cout<<"Miercoles"<<endl;
            break;

        case 4:
            cout<<"Jueves"<<endl;
            break;

        case 5:
            cout<<"Viernes"<<endl;
            break;

        case 6:
            cout<<"Sabado"<<endl;
            break;

        case 7:
            cout<<"Domingo"<<endl;
            break;

        default:
            cout<<"Error, numero fuera de rango"<<endl;
    }

    return 0;
}

//ejercicio 6

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



//ejercicio 7


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


//ejercicio 8 

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




//ejercicio 9 


// Materia: Programación I, Paralelo 4
// Autor: Carla Daniela Montoya Huaranca 
// Carrera: Ingenieria Biomedica

#include <iostream>
using namespace std;

int main()
{
    int numero, digito, fila, columna;

    system("cls");

    cout<<"Ingrese un numero entero positivo: ";
    cin>>numero;

    while(numero > 0)
    {
        digito = numero % 10;

        cout<<"Digito: "<<digito<<endl;

        fila = 1;

        while(fila <= digito)
        {
            columna = 1;

            while(columna <= digito)
            {
                cout<<"* ";
                columna = columna + 1;
            }

            cout<<endl;
            fila = fila + 1;
        }

        cout<<endl;

        numero = numero / 10;
    }

    return 0;
}




//ejercicio 10


// Materia: Programación I, Paralelo 4
// Autor: Carla Daniela Montoya Huaranca 
// Carrera: Ingenieria Biomedica

#include <iostream>
using namespace std;

int main()
{
    int mes;

    system("cls");

    cout<<"Ingrese un numero del 1 al 12: ";
    cin>>mes;

    switch(mes)
    {
        case 1:
            cout<<"Enero"<<endl;
            break;
        case 2:
            cout<<"Febrero"<<endl;
            break;
        case 3:
            cout<<"Marzo"<<endl;
            break;
        case 4:
            cout<<"Abril"<<endl;
            break;
        case 5:
            cout<<"Mayo"<<endl;
            break;
        case 6:
            cout<<"Junio"<<endl;
            break;
        case 7:
            cout<<"Julio"<<endl;
            break;
        case 8:
            cout<<"Agosto"<<endl;
            break;
        case 9:
            cout<<"Septiembre"<<endl;
            break;
        case 10:
            cout<<"Octubre"<<endl;
            break;
        case 11:
            cout<<"Noviembre"<<endl;
            break;
        case 12:
            cout<<"Diciembre"<<endl;
            break;
        default:
            cout<<"Numero fuera de rango"<<endl;
    }

    return 0;
}