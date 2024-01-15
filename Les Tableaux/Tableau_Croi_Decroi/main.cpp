#include <iostream>
#include <vector>
using namespace std;

 void coissant_decroissant(vector<int> T() , int n){


        for(int i=0 ; i<n ; i++){
                cout<<"T["<<i+1<<"]"<<" = ";
                cin>>T[i];
        }
        for(int i=0 ; i<n ; i++){
            for(int j=i ; j<n ; j++){
                if(T[i]>T[j]){
                    int c=T[i];
                    T[i]=T[j];
                    T[j]=c;
                }
            }
        }
        cout<<"  apres l'arrangement ordre croissante : ";
        for(int i=0; i<n ; i++){
            cout<<T[i] <<"  ";
        }
        cout<<endl;
        for(int i=0 ; i<n ; i++){
            for(int j=i ; j<n ; j++){
                if(T[i]<T[j]){
                    int c=T[i];
                    T[i]=T[j];
                    T[j]=c;
                }
            }
        }
        cout<<"  apres l'arrangement ordre decroissante : ";
        for(int i=0; i<n ; i++){
            cout<<T[i] <<"  ";
        }
 }

    int main()
    {
        int n;
        cout <<"saisir la taille du tableau"<< endl;
        cin>>n;
        vector<int> T[n];

        coissant_decroissant(T,n);
    return 0;
}
