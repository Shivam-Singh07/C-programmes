#include<stdio.h>
int main(){
    int k;
    printf("enter the num k::");
    scanf("%d",&k);
    int n[k],i,j,n2=0,p;
    for(j=0;j<k;j++){
        scanf("%d",&p);
        n[j]=p;
    }
    for(i=0;i<k;i++){
        n2+=n[i];
    }
    printf("%d",n2);
    // scanf();
    return 0;
}