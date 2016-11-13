#include <iostream>
#include<math.h>
using namespace std;
int main()
{
  double b,e,i,r;
  cout<<"Inserisci il valore della base. (b)"<<endl;
  cin>>b;
  cout<<"Inserisci il valore dell'esponente. (e)"<<endl;
  cin>>e;
   if(b>0&&e>0 || b<0&&e>0)
   {
    i=e;
    r=1;
     for(i=e;i!=0;i=i-1)
      {
       r=r*b;
      }
    cout<<"Il risultato e' = "<<r<<endl;
   }
   if(b<0&&e<0 || b>0&&e<0)
   {
    i=e;
    r=1;
     for(i=e;i!=0;i=i+1)
      {
       r= r*b;
      }
    r=1/r;
    cout<<"Il risultato e' = "<<r<<endl;

  }
}
