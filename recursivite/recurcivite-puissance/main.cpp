#include <iostream>

using namespace std;
int puissance (int X , int n){
    if(n==0)
        return 1 ;
    else
        return X * puissance(X , n-1);
    }
int main()
{
    int X , n ;
    cout << "saisir un  la valeur de X : " << endl;
    cin>> X;
    cout << "saisir un la valeur de n : " <<endl;
    cin>> n;
    cout<<" la puissance de "<<X<<" puissance "<<n<<" est : "<<puissance(X,n);

    return 0;
}
