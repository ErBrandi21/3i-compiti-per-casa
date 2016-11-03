#include <iostream>

using namespace std;

int main (){
    int X=0,N=0,n=0,n_u=0,n_ma=0,n_mi=0;
    cout<<"Inserisci il numero da confrontare (X)"<<endl;
    cin>>X;
    cout<<"Inserisci quanti numeri vuoi confrontare a X"<<endl;
    cin>>N;
    cout<<"Inserisci i numeri"<<endl;
    for (int i=0;i<N;i++) {
        cin>>n;
        if (n>= X) {
            if (n== X) {
                n_u= n_u+1;
            }
            else {
                n_ma= n_ma+1;
            }
        }
        else {
            n_mi= n_mi+1;
        }
    }
    cout << "La quantita' di numeri uguali a X e'"<<n_u<<endl;
    cout<<"La quantita' di numeri maggiori di X e'"<<n_ma<<endl;
    cout<<"La quantita' di numeri minori di X e'"<<n_mi<<endl;
    return 0;
}
