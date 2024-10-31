#include<iostream>
using namespace std;
int mayorDeTres(int a,int b,int c){
int mayor=a;
if(b>mayor){
mayor=b;
}
if(c>mayor){
mayor=c;
}
return mayor;
}
int main(){
int num1,num2,num3;
cout<<"Ingrese el primer numero: ";
cin>>num1;
cout<<"Ingrese el segundo numero: ";
cin>>num2;
cout<<"Ingrese el tercer numero: ";
cin>>num3;
int mayor=mayorDeTres(num1,num2,num3);
cout<<"El mayor de los tres numeros es: "<<mayor<<endl;
return 0;
}
