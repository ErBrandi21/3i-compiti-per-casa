#include <stdlib.h>
#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
   int N=0,i=0,vet[10];
   int array[10];
   for(N=0;N<=10;N++)
   {
       cout<<"Inserisci il "<<N<<" valore : "<<endl;
       cin>>vet[N];
   }
   cout<<"L'ordine inverso e' : "<<vet[10]<<vet[9]<<vet[8]<<vet[7]<<vet[6]<<vet[5]<<vet[4]<<vet[3]<<vet[2]<<vet[1]<<endl;
   return 0;
}

