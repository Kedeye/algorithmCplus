#include<iostream>
using namespace std;

int main()
{

    int T[10];
    int N;

    int SOM = 0;

    cout << "Tapez La Taille Du Tablaeu : " <<" ";
    cin>> N;
    if(N > 10){
        cout<<"La taille Max est 10 "<<endl;
    }

    else{
        cout << "Tapez les element du tableau :"<<endl;

        for(int i=1; i<=N ; i++){
            cout<<"T["<<i<<"] = ";
            cin>>T[i];
        }

        cout<<endl;

        for(int i=0 ; i <= N  ; i++){
            SOM = SOM + T[i];
        }

        cout<<"Somme Des Element Est : "<<SOM<<endl;
    }



         return 0;

    }
