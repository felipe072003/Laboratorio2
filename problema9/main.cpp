#include <iostream>

using namespace std;

int main()
{
    char cadena[20];
    cout<<"Ingrese una cadena de numeros: ";
    cin >> cadena;
    int a;
    cout<<"En cuanto lo quiere separar: ";
    cin>> a;
    unsigned long int numero=0;
    int acum2 =0;
    int acum = 0;
    int m = 0;


    for(int i=0;i<20;i++){

       for(int j=48;j<=57;j++){
           if(cadena[i]==j){
               acum++;
           }
       }
   }

   int cadena_numero[acum];

   for(int i=0;i<20;i++){

      for(int j=48;j<=57;j++){
          if(cadena[i]==j){
              cadena_numero[i]= j-48;
          }
       }
    }
   acum2 = acum;
   for(int i=0;i<acum;i++){
       int numero2=1;
       for(int j=acum2;j>1;j--){
           numero2*=10;
       }
       acum2--;
       numero+= cadena_numero[i]*numero2;
    }
   acum2 = 1;
   for(int j=a;j>0;j--){
           acum2*=10;
       }
    acum = 0;
     cout<<"Original: "<<numero<<endl;
    while(numero>0){
        m = numero%acum2;
        numero /= acum2;
        acum += m;
        if (m <1){
            acum += numero;
        }

    }
    cout<<"Suma: "<< acum<<endl;
    }


