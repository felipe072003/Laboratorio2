#include <iostream>

using namespace std;

int tam(char arreglo[]);
bool comparacion(char arreglo[], char arreglo2[], int len1);


int main()
{
   bool comp = 0;
   int len =0;
   int len2 =0;
   char cadena[30];
   cout<<"Ingrese la primer cadena de caracteres: ";
   cin>> cadena;
   char cadena2[30];
   cout<<"Ingrese la segunda cadena de caracteres: ";
   cin>> cadena2;

   len = tam(cadena);
   len2 = tam(cadena2);

   if(len == len2){
       comp = comparacion(cadena, cadena2, len);
         if (comp == true){
               cout<<"Las cadenas de caracteres son iguales"<<endl;
           }
          else{
             cout<<"Las cadenas de caracteres no son iguales"<<endl;
          }
   }
   else{
       cout<<"Las cadenas de caracteres no son iguales"<<endl;
   }

 }


int tam(char arreglo[]){
    int acum = 0;
    for(int i = 0;i<30;i++){
        if(arreglo[i] >= 48 && arreglo[i] <= 57){
            acum++;
        }
        else if(arreglo[i]>= 97 && arreglo[i] <= 122){
            acum++;
        }
        else if(arreglo[i]>= 65 && arreglo[i] <= 90){
            acum++;
        }
        else{
            break;
        }
    }
    return acum;
}

bool comparacion(char arreglo[], char arreglo2[],int len1){
    int acum = 0;
    bool igual;
    for(int i = 0; i< len1; i++){
        if(arreglo[i] == arreglo2[i]){
            acum++;
        }
    }
    igual = acum == len1;
    return igual;
}

