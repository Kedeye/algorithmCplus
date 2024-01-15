#include <iostream>
#include<vector>
#include<string.h>
using namespace std;

void Triercroissante (vector<double> T, bool choix){

    double c;
	if(choix==true){
	for(int i=0 ; i<T.size() ; i++){
		for(int j=i ; j<T.size() ; j++){
			if(T[i]>T[j]){
				int c=T[i];
				T[i]=T[j];
				T[j]=c;
			}
		}
	}
	cout<<"  apres l'arrangement ordre croissante : ";
	for(int i=0; i<T.size() ; i++){
		cout<<T[i] ;
	}
	}
	else if(choix==false){

	for(int i=0 ; i<T.size() ; i++){
		for(int j=i ; j<T.size() ; j++){
			if(T[i]<T[j]){
				int c=T[i];
				T[i]=T[j];
				T[j]=c;
			}
		}
	}
	cout<<"  apres l'arrangement ordre decroissante : ";
	for(int i=0; i<T.size(); i++){
		cout<<T[i];
	}
	}



}



int main (){
	vector<double> T(50);
	bool choix;
	int n;
	cout<<"saisir la taille du tablaux :  ";
	cin>>n;
	for(int i=1 ; i<=n ; i++){
			cout<<"T["<<i<<"]"<<" = ";
			cin>>T[i];
	}
	cout<<"choix croissant(true) ou decroissant(false) : ";
	cin>>choix;
	Triercroissante(T,choix);
	cout<<endl;

}
