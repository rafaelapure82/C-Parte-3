#include <iostream>/*Librer�a, in out stream que se usa para las lineas cout y cin*/
#include <windows.h>/*Librer�a espec�fico de Windows que contiene las funciones Windows API*/
#include <locale.h>/*Librer�a para establecer la configuraci�n regional actual*/
using namespace std;
int suma(int, int);/*Se declara la funci�n suma*/
 
/*Todo lo que est� en el main se va a ejecutar*/
int main(){
    setlocale(LC_CTYPE, "Spanish");/*Para poder utilizar los acentos*/
    int num1, num2;/*Se declara los campos que digitar� el usuario*/
    
    cout<<"Escriba el primer n�mero: ";
    cin>> num1;
    
    cout<<"Escriba el segundo n�mero: ";
    cin>> num2;
 
    cout<<"La suma es: "<< suma(num1, num2)<<"\n";/*Llama a la funci�n y env�a los 2 n�meros*/
    system("pause");/*Congela el resultado para que puedas verlo*/
}
 
/*Funci�n suma que recibe los dos n�meros y retorna el total de la suma*/
int suma(int a, int b){
    int c;/*Declaro "c" privada para la funci�n*/
    c = a + b;
    return c;
}
