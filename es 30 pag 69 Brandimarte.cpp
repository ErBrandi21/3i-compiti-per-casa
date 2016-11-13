#include <iostream>

using namespace std;

int main()
{
   int n;
   cout<<"Inserisci un numero intero minore di mille: "<<endl;
   cin>>n;
    int i=1;
    while(i<=3 && n !=0){
        cout<<"La "<<i<<" cifra da destra e' "<<n%10<<endl;
        n=n/10;
        i++;
    }while(i<=3 && n!=0);
    return 0;
}
