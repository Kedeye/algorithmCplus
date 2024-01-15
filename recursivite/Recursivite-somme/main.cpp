#include <iostream>
using namespace std;

int scane(int N){
    if(N==0)
        return 0;
    else
        return N + scane(N-1);
}
int main(){
    int N;
    cout<<"saisir un number : "<<endl;
    cin>>N;
    cout<<"la somme de 1 jusqua "<<N<<" est : "<<scane(N);

    return 0;
}
