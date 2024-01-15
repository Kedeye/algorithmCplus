#include<stdio.h>
int main(){
    int i, n, k=0, t[100], x;
    printf("saisir la taille du tableau: ");
    scanf("%d",&n);
    printf("saisir les elements du tableau: \n");
    for(i=0;i<n;i++){
        printf("t[%d] = ",i);
        scanf("%d" ,&t[i]);
    }
    for(i=0;i<n;i++){
        k=0;
        for(x=0;x<n;x++){
            if(t[i]==t[x]){
                k++;
        }   }
    printf("l'element t[%d] apparait %d fois!\n",i,k);
    }
    return 0;
}
