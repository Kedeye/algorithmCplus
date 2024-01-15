#include <iostream>

using namespace std;

int main()
{
    int a,b;
    char op;
    cout<<"enter premier entier svp" << endl;
    cin>>a;
    cout<<"enter op svp" <<endl;
    cin>>op;
    cout<<"enter deux entier svp" <<endl;
    cin>>b;
    switch(op){
    case'+' : cout<<a<<"+"<<b<< "=" <<a+b; break;
    case'-' : cout<<a<<"-"<<b<<" = "<<a-b <<endl;break;
    default : cout<<"please enter + ou - please " ;
    }
    return 0;
}
