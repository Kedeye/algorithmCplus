#include <iostream>
#include <vector>
using namespace std;

int insertion(vector<int>T ,int Taille,int pos , int N){

    cout<<"veuillez saisir la taille du tableau : "<<endl;
    cin>>Taille;
    cout<<"veuillez saisir les elements du tableau : "<<endl;

        for(int i = 0 ; i < Taille ; i++){
            cout<<"T["<<i+1<<"] = ";
            cin>>T[i];
        }

        cout<<"veuillez saisir la valeur a inserer : "<<endl;
        cin>>N;
        cout<<"veuillez saisir la position : "<<endl;
        cin>>pos;

        if(pos <= 0 || pos > Taille+1){
            cout<<"position invalide! entrer une position enter 1 et "<<Taille+1<<endl;
            }
        else{

            for(int i = Taille; i >= pos ; i--){
                T[i] = T[i-1];
            }

            T[pos-1] = N;
            Taille++;

            cout<<"elements du tableau apres insertion sont : "<<endl;
            for(int i=0 ; i<Taille ; i++){
                 cout<<"T["<<i+1<<"] = "<<T[i]<<endl;
            }

            }


        }



int main()
{

      vector<int> T (10);
      int  Taille , pos , N ;
      insertion(T,Taille,pos,N);

    return 0;
}
