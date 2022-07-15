#include <iostream>

using namespace std;

void cambio(int*, char *abc,int);
void retornar(char *,int);


int main()
{
    int a = 0;
    int acum = 0;
    char b[10];
    int num = 0;
    cout<<"Ingrese un numero entero: ";
    cin>> num;


    while(num>0){
        a = num%10;
        num = num/10;
        cambio(&a , b, acum);
        acum++;

    }
    acum--;
    cout<<"Se retorna la cadena: ";
    retornar(b,acum);

}

void cambio(int *a, char *b, int acum){
    b[acum] = *a + 48;
}

void retornar(char *b, int acum){
    for(int i = acum; i>=0;i--){
        cout<<*(b+i);

    }
    cout<<endl;

}

