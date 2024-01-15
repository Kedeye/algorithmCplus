#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a,b,c,delta,x1,x2;
    cout<<"saisir les trois coifficient reels dun equation du second degre svp : \n";
    cout<<"a = ";
    cin>>a;
    cout<<"b = ";
    cin>>b;
    cout<<"c = ";
    cin>>c;
    cout<<endl;
    if(a==0){
        if(b!=0)
            cout<<"equation du premier degre a une solution unique est "<<-c/b;
        else{
            if(c!=0)
                cout<<"pas de solution ";
            else
                cout<<"infinite de solution";

        }
    }
    else{
        delta=b*b-(4*(a*c));
        if(delta<0)
            cout<<"pas de solution";
        else{
            if(delta==0)
                cout<<"lequation une unique solution"<<-b/a*a;
            else{
                x1=(-b-sqrt(delta))/(2*a);
                x2=(-b+sqrt(delta))/(2*a);
                cout<<"lequation a deux solution est "<<x1 <<"et" <<x2;
            }
        }
    }

}
