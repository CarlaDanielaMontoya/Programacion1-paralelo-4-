// Materia: Programación I, Paralelo 4
// Autor: Carla Daniela Montoya Huaranca 
// Carrera del estudiante: Ingenieria Biomedica

#include <iostream>

using namespace std;

float calcularArea(float base, float altura)
{
    float area;

    area = (base * altura) / 2;

    return area;
}


int main()
{
    float base;
    float altura;
    float area;

    system("cls");

    cout<<"Ingrese la base del triangulo: ";
    cin>>base;

    cout<<"Ingrese la altura del triangulo: ";
    cin>>altura;

    area = calcularArea(base, altura);

    cout<<"El area del triangulo es: "<<area<<endl;

    return 0;
}

// ejercicio 2 
// Materia: Programación I, Paralelo 4
// Autor: Carla Daniela Montoya Huaranca 
// Carrera del estudiante: Ingenieria Biomedica

#include <iostream>

using namespace std;


int encontrarMayor(int n1, int n2, int n3)
{
    int mayor;

    mayor = n1;

    if(n2 > mayor)
    {
        mayor = n2;
    }

    if(n3 > mayor)
    {
        mayor = n3;
    }

    return mayor;
}


int main()
{
    int n1, n2, n3;
    int mayor;

    system("cls");

    cout<<"Ingrese el primer numero: ";
    cin>>n1;

    cout<<"Ingrese el segundo numero: ";
    cin>>n2;

    cout<<"Ingrese el tercer numero: ";
    cin>>n3;

    mayor = encontrarMayor(n1, n2, n3);

    cout<<"El numero mayor es: "<<mayor<<endl;

    return 0;
}


// ejercicio 3
// Materia: Programación I, Paralelo 4
// Autor: Carla Daniela Montoya Huaranca 
// Carrera del estudiante: Ingenieria Biomedica
#include <iostream>

using namespace std;


float calcularVolumen(float radio, float altura)
{
    const float pi = 3.1416;
    float volumen;

    volumen = pi * radio * radio * altura;

    return volumen;
}


int main()
{
    float radio;
    float altura;
    float volumen;

    system("cls");

    cout<<"Ingrese el radio del cilindro: ";
    cin>>radio;

    cout<<"Ingrese la altura del cilindro: ";
    cin>>altura;

    volumen = calcularVolumen(radio, altura);

    cout<<"El volumen del cilindro es: "<<volumen<<endl;

    return 0;
}




// ejercicio 4 
// Materia: Programación I, Paralelo 4
// Autor: Carla Daniela Montoya Huaranca 
// Carrera del estudiante: Ingenieria Biomedica

#include <iostream>

using namespace std;


float convertirDolares(float bolivianos, float cambio)
{
    float dolares;

    dolares = bolivianos / cambio;

    return dolares;
}


int main()
{
    float bolivianos;
    float cambio;
    float dolares;

    system("cls");

    cout<<"Ingrese el monto en bolivianos: ";
    cin>>bolivianos;

    cout<<"Ingrese el tipo de cambio: ";
    cin>>cambio;

    dolares = convertirDolares(bolivianos, cambio);

    cout<<"El monto en dolares es: "<<dolares<<endl;

    return 0;
}



// ejercicio 5
// Materia: Programación I, Paralelo 4
// Autor: Carla Daniela Montoya Huaranca 
// Carrera del estudiante: Ingenieria Biomedica

#include <iostream>

using namespace std;


bool esPar(int numero)
{
    if(numero % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}


int main()
{
    int numero;

    system("cls");

    cout<<"Ingrese un numero entero: ";
    cin>>numero;

    if(esPar(numero))
    {
        cout<<"El numero es par"<<endl;
    }
    else
    {
        cout<<"El numero es impar"<<endl;
    }

    return 0;
}


// ejercicio 6
// Materia: Programación I, Paralelo 4
// Autor: Carla Daniela Montoya Huaranca 
// Carrera del estudiante: Ingenieria Biomedica

#include <iostream>

using namespace std;


int sumarNaturales(int N)
{
    int suma = 0;

    for(int i = 1; i <= N; i++)
    {
        suma = suma + i;
    }

    return suma;
}


int main()
{
    int N;
    int resultado;

    system("cls");

    cout<<"Ingrese un numero positivo: ";
    cin>>N;

    resultado = sumarNaturales(N);

    cout<<"La suma de los numeros es: "<<resultado<<endl;

    return 0;
}

// ejercicio 7
// Materia: Programación I, Paralelo 4
// Autor: Carla Daniela Montoya Huaranca 
// Carrera del estudiante: Ingenieria Biomedica

#include <iostream>

using namespace std;


float calcularDistancia(float velocidad, float tiempo)
{
    float distancia;

    distancia = velocidad * tiempo;

    return distancia;
}


int main()
{
    float velocidad;
    float tiempo;
    float distancia;

    system("cls");

    cout<<"Ingrese la velocidad: ";
    cin>>velocidad;

    cout<<"Ingrese el tiempo: ";
    cin>>tiempo;

    distancia = calcularDistancia(velocidad, tiempo);

    cout<<"La distancia recorrida es: "<<distancia<<endl;

    return 0;
}



// ejercicio 8
// Materia: Programación I, Paralelo 4
// Autor: Carla Daniela Montoya Huaranca 
// Carrera del estudiante: Ingenieria Biomedica

#include <iostream>

using namespace std;


int contarDigitos(int numero)
{
    int cantidad = 0;

    while(numero > 0)
    {
        numero = numero / 10;
        cantidad = cantidad + 1;
    }

    return cantidad;
}


int main()
{
    int numero;
    int cantidad;

    system("cls");

    cout<<"Ingrese un numero entero positivo: ";
    cin>>numero;

    cantidad = contarDigitos(numero);

    cout<<"La cantidad de digitos es: "<<cantidad<<endl;

    return 0;
}

// ejercicio 9
// Materia: Programación I, Paralelo 4
// Autor: Carla Daniela Montoya Huaranca 
// Carrera del estudiante: Ingenieria Biomedica

#include <iostream>

using namespace std;


float calcularPromedio(float n1, float n2, float n3)
{
    float promedio;

    promedio = (n1 + n2 + n3) / 3;

    return promedio;
}


float calcularNotaFinal(float promedio, float examen)
{
    float nota;

    nota = (promedio * 0.5) + (examen * 0.5);

    return nota;
}


bool aprobo(float n1, float n2, float n3, float examen, float notaFinal)
{
    if(n1 >= 60)
    {
        if(n2 >= 60)
        {
            if(n3 >= 60)
            {
                if(examen >= 60)
                {
                    if(notaFinal >= 51)
                    {
                        return true;
                    }
                }
            }
        }
    }

    return false;
}


int main()
{
    float parcial1, parcial2, parcial3;
    float examen;
    float promedio;
    float notaFinal;

    system("cls");

    cout<<"Ingrese nota parcial 1: ";
    cin>>parcial1;

    cout<<"Ingrese nota parcial 2: ";
    cin>>parcial2;

    cout<<"Ingrese nota parcial 3: ";
    cin>>parcial3;

    cout<<"Ingrese nota examen final: ";
    cin>>examen;


    promedio = calcularPromedio(parcial1, parcial2, parcial3);

    notaFinal = calcularNotaFinal(promedio, examen);


    cout<<endl;
    cout<<"Promedio parciales: "<<promedio<<endl;
    cout<<"Nota final: "<<notaFinal<<endl;


    if(aprobo(parcial1, parcial2, parcial3, examen, notaFinal))
    {
        cout<<"El estudiante aprobo"<<endl;
    }
    else
    {
        cout<<"El estudiante reprobo"<<endl;
    }


    return 0;
}



