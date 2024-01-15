#include <iostream>

using namespace std;

int main()
{
    int T [10];
    int pos ;
    int N;

    cout<<"veuillez saisir la taille du tableau : "<<endl;
    cin>>N;
    cout<<"veuillez saisir les elements du tableau : "<<endl;

        for(int i = 0 ; i < N ; i++){
            cout<<"T["<<i+1<<"] = ";
            cin>>T[i];
        }

        cout<<"veuillez saisir la position de lelement a supprimer : "<<endl;
        cin>>pos;

        if(pos <= 0 || pos > N){
            cout<<"position invalide! entrer une position enter 1 et "<<N;
            }

        else{

            for(int i = pos; i < N ; i++){
                T[i-1] = T[i];
            }

            N--;

            cout<<"elements du tableau apres la suppression sont : "<<endl;
            for(int i=0 ; i < N ; i++){
                 cout<<"T["<<i+1<<"] = "<<T[i]<<endl;
            }

            }
    return 0;
}
