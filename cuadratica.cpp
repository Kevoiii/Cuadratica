//En este programa se imita la formula general para sacar X1 y X2,
// use varias variables y utilice comandos como sqrt y pow, ademas utilice un if.
#include <bits/stdc++.h>
using namespace std;
int main(){

int a, b ,c, x1, x2;

double r;

cout<<"Ingresa los valores de A, B y C"<<endl;

cin>>a>>b>>c;

r=sqrt(pow(b,2)-4*a*c);

x1=(-b+r)/(2*a);

x2=(-b-r)/(2*a);

if(a == 0 or ((pow(b,2)-4*a*c)<0))
   {
       cout<<"La raiz es negativa o no se puede resolver este problema";
        return 0;
   }

cout<<"las soluciones son: X1= "<<x1<<" y X2= "<<x2;






return 0;
}
