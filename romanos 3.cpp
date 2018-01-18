#include<iostream>
using namespace std;
int saber(char n)
{
    int nv=0;
    switch(n)
    {
      case 'I':nv=1;break;
      case 'V':nv=5;break;
      case 'X':nv=10;break;
      case 'L':nv=50;break;
      case 'C':nv=100;break;
      case 'D':nv=500;break;
      case 'M':nv=1000;break;
    };
    //printf("%d,",nv);
    return nv;
};
 
void convertir(char r[],int n)
{
	 int nume[n];
	 int s=0,sig=0,act;
	 //Paso XXIV a 10,10,1,5
	 for(int i=0;i<n;i++)
	 {
	 	nume[i]=saber(r[i]);
	 }
	 if(n%2==0)
	 {
	 	for(int i=0;i<n;i=i+2)
	 	{
	 		act=nume[i];
	 		sig=nume[i+1];
	 		if(act>=sig)
	 			s=s+(act+sig);
	 		else
	 			s=s+(sig-act);
	 	}	
	 }else{
	 	for(int i=n-1;i>0;i=i-2)
	 	{
	 		act=nume[i];
	 		sig=nume[i-1];
	 		if(act>sig)
	 			s=s+(act-sig);
	 		else
	 			s=s+(sig+act);
	 	}
 
	 	act=nume[0];
	 	s=s+act;
	 }
 
     cout<<"El numero es : "<<s;
};
 
int main()
{
	int lon;
	cout<<"Cantidad Letras: ";
	cin>>lon;
	char romano[lon];
	cout<<"Numero Romano: ";
	cin>>romano;
	convertir(romano,lon);
	return 0;
}
