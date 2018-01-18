#include <iostream>

using namespace std;

int main(){
int i,j,temp,cantidad;
int vector[5];

cout<<"cantidad";

for(i=0;i<cantidad;i++)//obtiene los valores;
{
cout<<"valor "<<i+1<<vector[i];
}
for(i=1;i<cantidad;i++)//este es el Ordenamiento de Arreglos (metodo de burbuja);
{
for(j=0;j<cantidad-1;j++)
{
if(vector[j] )//y le ordenara de menor a mayor .
{
temp = vector[j];
vector[j]=vector[j+1];
vector[j+1]=temp;
}

}
}
cout<<"\nLos numeros en orden:\n";
for(i=0;i<cantidad;i++)//imprime los valores
{
cout<<vector[i]<<" ";
}
cout<<endl<<endl;
system("PAUSE");
return 0;
}
