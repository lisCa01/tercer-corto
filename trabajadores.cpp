#include <iostream>
using namespace std;
void calcular (int hnormales, int hextras );

int main() {
int n, hnormales,hextras;
cout<<"bienvenid@"<<endl;
cout<<"por favor,ingrese numero de empleados:"<<endl;
cin>>n;
for(int i=0;i<n;i++)
{
cout<<"ingrese horas normales realizadas:"<<endl;
cin>>hnormales;
cout<<"ingrese horas extras realizadas:"<<endl;
cin>>hextras;

calcular(hnormales , hextras);
}
return 0;
}
void calcular (int hnormales, int hextras){
  float salariototal,salarioreal;
  //calcuando salario total
  salariototal=((hnormales*1.75)+(hextras*2.50));
  cout<<"su salario total es: $"<<salariototal<<endl;

  //calculando el salario real
  float ISSS=salariototal*0.04;
  float AFP=salariototal*0.0625;
  if (salariototal>500){
    float ISR=salariototal*0.1;
    salarioreal=((hnormales*1.75)+(hextras*2.50))-ISSS-AFP-ISR;
  }
  else {
    salarioreal=((hnormales*1.75)+(hextras*2.50))-ISSS-AFP;
  }
  cout<<"su salario real es: $"<<salarioreal<<endl;
}