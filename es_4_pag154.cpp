#include <stdlib.h>
#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
   int N,vet[10];
   int array[10];
   for(N=1;N<=10;N++)
   {
       cout<<"Inserisci il "<<N<<" valore : "<<endl;
       cin>>vet[N];
   }
   cout<<vet[10]<<endl;//nel cuot se guarda mi stampa 10 e 11, non capisco il motivo quindi il prodotto non mi esce, questi cout li ho inseiriti per farle capire ciò che intendo infatti nel programma originale non ci sarenbero
   cout<<vet[9]<<endl;
   cout<<vet[8]<<endl;
   cout<<vet[7]<<endl;
   cout<<vet[6]<<endl;
   cout<<vet[5]<<endl;
   cout<<vet[4]<<endl;
   cout<<vet[3]<<endl;
   cout<<vet[2]<<endl;
   cout<<vet[1]<<endl;
   cout<<"Il prodotto e' : "<<vet[10]*vet[8]*vet[6]*vet[4]*vet[2]<<endl;
   cout<<"La somma e' : "<<vet[9]+vet[7]+vet[5]+vet[3]+vet[1]<<endl;
   return 0;
}
