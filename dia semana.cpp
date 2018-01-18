#include <iostream>
using namespace std;
int main(){
    int d;
    string Dia[]={"Domingo", "Lunes", "Martes", "Miercoles", "Jueves", "Viernes", "Sabado"};
    cout<<"Ingresa un numero"<<endl;
    cin>>d;
     if(d >= 1 && d <= 7){
          cout<<"el dia "<<d<<" es "<<Dia[d-1];
      }else{
          cout<<"No es un dia de la semana";
      }
return 0;
}
