#include <iostream>
using namespace std;

int binaire (int n){
    if(n!=0){
        binaire(n/2);
        cout<<n%2;
    }
}

int main()
{
    int n ;
    cout << "saisir la valuer de n " << endl;
    cin>> n;
    cout<<"le number binair de "<<n<<" est: "<<endl;
    binaire(n);

    return 0;
}
