#include <iostream>
#include <windows.h>
using namespace std;
 
/*Declaras la funci�n al mismo tiempo calcula el promedio*/
/*Si quieres cambiar de posici�n por ejemplo ubicarla abajo*/
/*no lo podras hacer y te dar�a un error, ya que las funciones*/
/*se declaran antes del main*/
float promedio(int valores[], int cantidad) {
    int i;
    float suma = 0.0;
 
    /*El ciclo for cuenta el n�mero de notas que desea promediar*/
    for (i = 0; i < cantidad; ++i)
        suma += valores[i];/*Suma las notas ingresadas*/
 
    return suma / (float) cantidad;/*La suma total de notas entre la cantidad de notas*/
}
 
int main() {
 
    /*Se declaran las variables y se establece un espacio*/
    int notas[10];
    char nombre[20];
    char opcion[3];
    int n, i;
 
    /*Se inicia la sentencia do while*/
    do{
        /*Se piden los datos para que ingrese el usuario*/
        cout<<"Escriba el nombre del alumno: ";
        cin>> nombre;
 
        cout<<"Cuantas notas tiene "<<nombre<<"? ";
        cin>> n;
 
        /*ciclo for te pide en pantalla las notas, seg�n la cantidad que ingresastes*/
        for (i = 0; i < n; ++i) {
            cout<<"  Nota "<< i + 1<<": ";
            cin>> notas[i];
        }
 
        /*Llamas a la funci�n promedio y le das los par�metros y te muestra el resultado*/
        cout<<"El promedio de "<<nombre<<" es: "<< promedio(notas, n)<<"\n";
 
        /*Te pide si deseas seguir calculando promedios que este dato lo almacena opcion*/
        cout<<"Desea calcular mas promedios (si/no)? ";
        cin>> opcion;
 
    }
    /*While es el ciclo que si el usuario ingres s o S el ciclo iniciar� una vez m�s*/
    /*si el usuario elige No el ciclo se detendra*/
    while (opcion[0] == 's' || opcion[0] == 'S');
    return 0;
}
