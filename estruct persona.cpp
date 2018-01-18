#include <iostream>
#include <windows.h>
#define max 100 /*Constante*/
using namespace std;
 
int main(void){
    /*Declara las variables para los ciclo for*/
    int i = 0, n = 0;
 
    /*Declara estructura persona*/
    struct persona{
        char cedula[14];
        char nombre[15];
        char apellido[15];
        int edad;
        char profesion[20];
        char lugar[50];
        char direccion[50];
        int telefono;
    };
    /*Declara alumno, arreglo de la estructura persona*/
    struct persona alumno[max];
 
    /*Se pide cuantos registros de alumnos se guardaran*/
    cout<<"Cuantos datos desea introducir?/n";
    cin>> n;
 
    /*Ciclo for que va a recorrer según la cantidad escrita anteriormente*/
    for (i = 0; i < n; i++){
        cout<<"\nEscriba la Cedula "<< i+1<<":";
        cin>> alumno[i].cedula;
   
        cout<<"\nEscriba el Nombre "<< i+1<<":";
        cin>> alumno[i].nombre;
   
        cout<<"\nEscriba el Apellido "<< i+1<<":";
        cin>> alumno[i].apellido;
 
        cout<<"\nEscriba la Edad de "<< i+1<<":";
        cin>> alumno[i].edad;
   
        cout<<"\nEscriba la Profesion de "<< i+1<<":";
        cin>> alumno[i].profesion;
   
        cout<<"\nEscriba el Lugar de Nacimiento de "<< i+1<<":";
        cin>> alumno[i].lugar;
   
        cout<<"\nEscriba la Direccion de "<< i+1<<":";
        cin>> alumno[i].direccion;
   
        cout<<"\nEscriba el Telefono de "<< i+1<<":";
        cin>> alumno[i].telefono;
    }
 
    cout<<"/nEl registro de Alumnos que se introdujeron son: \n\n";
 
    /*Ciclo for que muestra el listado de registro ingresados*/
    for (i = 0; i < n; i++){
        /*Se llama al arreglo alumno seguido de la variable cedula*/
        cout<< alumno[i].cedula;
        cout<<"\t"<<alumno[i].nombre;
        cout<<"\t"<<alumno[i].apellido;
        cout<<"\t"<<alumno[i].edad;
        cout<<"\t"<<alumno[i].profesion;
        cout<<"\t"<<alumno[i].lugar;
        cout<<"\t"<<alumno[i].direccion;
        cout<<"\t"<<alumno[i].telefono<<"\n\n";
   }
    
   system("pause");
}
