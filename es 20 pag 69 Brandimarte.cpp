#include <iostream>

using namespace std;

int main (){
    int n=0,N=0,r=0;
    cout<<"Inserisci il numero fino acui vuoi sapere i numeri pari presenti"<<endl;
    cin>> N;
    for (int i=0;i<N;i++) {
        n++;
        r=n%2;
        if (r == 0) {
            cout << n <<endl;
        }
    }
    return 0;
}
