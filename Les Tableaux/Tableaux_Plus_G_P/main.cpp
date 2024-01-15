#include <iostream>

using namespace std;

int main()
{
    T[50];
    int max ;
    int min ;
    int s = 0;
    int p = 1;
    int N;

        cout <<" Saisir la taille du tablaux : "<<endl;
        cin>>N;

        cout << "saisir les element du tableau : " << endl;
        for(int i=1; i <=N ; i++){
            cout<<"T["<<i<<"]"<<" = ";
            cin>>T[i];

            }

            for(int i=1 ; i<=N ; i++){

            s += T[i] ;
            p *= T[i] ;

                if(T[i] > max){
                    max = T[i];
                }
                if(T[i] < min){
                    min = T[i];
                }
            }

        cout<<"la somme : "<<s<<endl;
        cout<<"la produit : "<<p<<endl;
        cout<<"le plus grand element du tableau est : "<<max<<endl;
        cout<<"le plus petite element du tableau est : "<<min<<endl;

    return 0;
}
