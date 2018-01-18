#include <iostream>
#include <cstring>
#include <sstream>

using namespace std;
string convertir(int n){
    string cadena = "";
    while(n>=1000){
        cadena+="M";
        n-=1000;
    }
    if(n>=900){
        cadena+="DM";
        n-=900;
    }
    if(n>=500){
        cadena+="D";
        n-=500;
    }
    if(n>=400){
        cadena+="CD";
        n-=400;
    }
    while(n>=100){
        cadena+="C";
        n-=100;
    }
    if(n>=90){
        cadena+="XC";
        n-=90;
    }
    if(n>=50){
        cadena+="L";
        n-=50;
    }
    if(n>=40){
        cadena+="XL";
        n-=40;
    }
    while(n>=10){
        cadena+="X";
        n-=10;
    }
    if(n>=9){
        cadena+="IX";
        n-=9;
    }
    if(n>=5){
        cadena+="V";
        n-=5;
    }
    if(n>=4){
        cadena+="IV";
        n-=4;
    }
    while(n>=1){
        cadena+="I";
        n-=1;
    }
    return cadena;  
}
string romanos(string numero){
    int n = atoi(numero.c_str());
    numero = convertir(n);
    return numero;
}

int main(){
    string numero;
    cout << "Ingresa el numero decimal: ";
    getline(cin,numero);
    numero = romanos(numero);  
    cout << "El numero en Romanos es: " << numero;
    cin.get();    
    return 0;
}
