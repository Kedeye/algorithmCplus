#include<iostream>
using namespace std;



int main()
{
    int T[30],i;


    bool croissant=true,decroissant=true;
    cout<<"Veuillez taper l'entier du tableau : "<<endl;
    for(i=1;i<=30;i++)
        {

        cout<<"T["<<i<<"] = ";
        cin>>T[i];

        }
        cout<<endl;

        for(i=1; i<=30 ;i++)
        {
        if(T[i]>T[i+1]){croissant=false;}
        if(T[i]<T[i+1]){decroissant=false;}
        }

    if(croissant && decroissant) cout<<"le tableau est constant"<<endl;
    if(croissant && !decroissant) cout<<"le tableau est croissant"<<endl;
    if(!croissant && decroissant) cout<<"le tableau est decroissant"<<endl;
    if(!croissant && !decroissant) cout<<"le tableau est quelconque"<<endl;

return 0;
}
