#include <iostream>
#include <stdlib.h>

using namespace std;
int main()
{
  int adivinar=77;
  int num ;
  int cont =1;

  
  cout<<"Numero Magico, puedes adivinarlo¿? "<<endl<<endl; cout<< "tienes 5 intentos"<<endl<<endl;;

 do 
 {
    
    cout<<"introduce un numero:"<<endl;
    cin>>num;
      if (num<adivinar){
      cout <<"el numero es mayor, ¡no te desanimes!"<<endl<<endl;
      cout<<"numero de intentos :"<<cont<<endl<<endl; }
       else if (num>adivinar)
        {
      cout<<"el numero es menor, ¡ vuelve a intentarlo!"<<endl<<endl ;
      cout<<"numero de intentos:"<<cont<<endl<<endl;}
       else if ( num ==adivinar) {
        cout<<"ADIVINASTE, felicidades"<<endl<<endl;
        cout<<"numero de intentos :"<<cont<< endl<<endl;
        break;
        }
        cont++;
 }
 while (cont<  5);
     if(cont==5)
   { cout<<"ya ni modo, se acabaron los intentos"<<endl;}

   return 0; 
          
  }