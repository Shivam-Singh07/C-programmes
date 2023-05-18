#include<stdio.h>
int main(){
    int k;
    printf("enter the num k::");
    scanf("%d",&k);
    int n[k],i,j,n2=0,p;
    int sumev=0,sumodd=0;
    for(j=0;j<k;j++){
        scanf("%d",&p);
        n[j]=p;
    }
    for(int i=0;i<k;i++){
        if(i%2==0){
            sumev+=n[i];
        }
        else sumodd+=n[i];
        
    }
    printf("%d",sumodd-sumev);
    return 0;
}