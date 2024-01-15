#include <iostream>
using namespace std;

int main()
{
        int T[10];
        int i;
        int N = 10;

         cout << "Tapez les element du tableau :"<<endl;
         cout<<endl;
         for(int i=0; i<N ; i++){
            cout<<"T["<<i<<"] = ";
            cin>>T[i];
            }
            cout<<endl;

        N = 0;
        for (int i=0; i<10 ; i++){
        if(T[i] > 10 ){
        N++;
            }
        }

         cout<< "Il Ya "<< N <<" Nombres superieur a 10"<<" ";

        N = 0;
        for (int i=0; i<10 ; i++){
        if(T[i] == 10 ){
        N++;
            }
        }

         cout<< " Et "<< N <<" Number Egale  10"<<" ";

        N = 0;
        for (int i=0; i<10 ; i++){
        if(T[i] < 10 ){
        N++;
            }
        }
         cout<< " Et "<< N <<" Number Inferieur a 10"<<endl;


    return 0;
}

