#include <iostream> // ejemplo 3 #include <string> 
using namespace std; 
int main() 
{ 
string s1 = "Hola ", s3="maria"; 
string s2="maria"; 
s2 = "carlos"; //Cambio del valor de la variable
string s = s1 + s2; 
cout << s1 << s2 << '\n'; //Primer mensaje
cout << s << '\n'; //Segundo Mensaje
s += '\n'; 
cout << s;//Tercer mensaje
 }

