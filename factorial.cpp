#include <iostream>
#include <windows.h>
using namespace std;

int main(void){
    /*Declaro las variables*/
    int i=0, fact=1, n=0;
 
    cout<<"Escriba el numero para calcular el Factorial: ";
    cin>> n;
 
    /*Un for que multiplica el factorial de un número*/
    for (i=1;i<=n;++i){
       fact=fact*i;
    }
 
    /*Muestra el resultado en pantalla*/
    cout<<"El Factorial de "<<n <<" es "<<fact<<"\n";
    system("pause");
}
