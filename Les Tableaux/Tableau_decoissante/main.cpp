#include <iostream>

using namespace std;

int main()
{
   int T[5];
   int i , j , Tmp ;
   cout<<"Veuillez saisir les elements du tableau : "<<endl;
   for(i=0 ; i<5 ; i++){
    cout<<"T["<<i<<"] = ";
    cin>>T[i];
    }
    for(i=0 ; i<5 ; i++){
        for(j=i+1 ; j<5 ; j++){
            if(T[i]<T[j]){
                Tmp = T[i];
                T[i] = T[j];
                T[j] = Tmp;

            }

        }

    }

        cout<<"les elements du tableau par order decroissant sont : "<<endl;
        for(i=0 ; i<5; i++)
            cout<<"T["<<i<<"] = "<<T[i]<<endl;

    return 0;
}
