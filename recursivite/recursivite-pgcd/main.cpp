#include <iostream>

using namespace std;
int pgcd (int a , int b){
    if(b==0)
        return a ;
    else
        return pgcd(b,a%b);
}

int main()
{
    int a,b;
    cout << "saisir la premier valeur : " << endl;
    cin>> a;
    cout << "saisir la deuxiem valeur : " << endl;
    cin>> b;
    cout<< "la pgcd enter "<<a<<" et "<<b <<" est : "<< pgcd(a,b)<<endl;
    cout<< "la ppcm enter "<<a<<" et "<<b <<" est : "<<((a*b)/pgcd(a,b))<<endl;

    return 0;
}
