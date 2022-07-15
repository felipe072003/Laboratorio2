#include <iostream>

using namespace std;

int main()
{
  cout <<"Ingrese un numero: "<< endl;
  int numero;
  cin>>numero;

  int faltante=numero;
  int billetes50k=(faltante - faltante%50000)/50000;
      faltante=faltante%50000;
  cout<<"50000 : "<<""<<billetes50k<<endl;

  int billetes20k=(faltante - faltante%20000)/20000;
  faltante=faltante%20000;
  cout<<"20000 : "<<""<<billetes20k<<endl;

  int billetes10k=(faltante - faltante%10000)/10000;
  faltante=faltante%10000;
  cout<<"10000 : "<<""<<billetes10k<<endl;

  int billetes5k=(faltante - faltante%5000)/5000;
  faltante=faltante%5000;
  cout<<"5000 : "<<""<<billetes5k<<endl;

  int billetes2k= (faltante - faltante%2000)/2000;
  faltante=faltante%2000;
  cout<<"2000 : "<<""<<billetes2k<<endl;

  int billetes1k=(faltante - faltante%1000)/1000;
  faltante=faltante%1000;
  cout<<"1000 : "<<""<<billetes1k<<endl;

  int monedas500=(faltante - faltante%500)/500;
  faltante=faltante%500;
  cout<<"500 : "<<""<<monedas500<<endl;

  int monedas200=(faltante - faltante%200)/200;
  faltante=faltante%200;
  cout<<"200 : "<<""<<monedas200<<endl;

  int monedas100=(faltante - faltante%100)/100;
  faltante=faltante%100;
  cout<<"100 : "<<""<<monedas100<<endl;

  int monedas50=(faltante - faltante%50)/50;
  faltante=faltante%50;
  cout<<"50 : "<<""<<monedas50<<endl;
  cout<<"faltante: "<<""<<faltante<<endl;


  return 0;
}
