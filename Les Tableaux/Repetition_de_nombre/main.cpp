#include <iostream>

using namespace std;

int main()
{
    int T[10] = {0,0,1,1,1,1,4,9,10,20};
    int tab[25] = {};


        for(int i=0; i<10 ; i++){
            tab[T[i]]++;
        }

        for(int i=0; i<=20 ; i++){
            cout<<i<<"-"<<tab[i]<<endl;
        }

    return 0;
}
