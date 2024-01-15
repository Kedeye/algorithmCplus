#include <iostream>

using namespace std;
int factoriel (int N){
    int F,i;
    if(N==0 || N==1)
        F=1;
    else{
        F=1;
        for(i=2 ; i<=N ; i++)
            F=i*F;
        }
        return F;
}

int main()
{
    int N;
    cout<<"saisir un Number svp :"<<endl;
    cin>>N;
    cout << "la factoriel de "<<N<<" est : "<<factoriel(N)<<endl;
    return 0;
}
