#include <iostream> 
#include <string.h>
using namespace std;
int main() 
{
char Nombre[50]; 
cout << "Introduzca su Nombre: "; 
cin >> Nombre;
char *CopiaNombre = new char[strlen(Nombre)+1];
// Se copia el Nombre en la variable CopiaNombre strcpy(CopiaNombre, Nombre); cout << CopiaNombre;  
delete [] CopiaNombre;
return 0;
system ("PAUSE");
}
