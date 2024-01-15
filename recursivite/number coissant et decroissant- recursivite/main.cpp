#include <iostream>

using namespace std;

int croissant (int n ){
    if(n!=0){
        croissant(n-1);
        cout<<n;

    }
}
int decroissant (int n){
    if(n!=0){
        cout<<n;
        decroissant(n-1);
    }
}

int main()
{
    int n ;
    cout << "saisir un valeur svp " << endl;
    cin>> n;
    croissant(n);
    cout<<endl;
    cout<<decroissant(n);
    return 0;
}
