#include<stdio.h>
#include<limits.h>
int main(){
    int k;
    printf("enter the num k::");
    scanf("%d",&k);
    int n[k],i,j,n2=0,p;
    int a=0;
    for(j=0;j<k;j++){
        scanf("%d",&p);
        n[j]=p;
    }
    
    int maxm=INT_MIN;
    for(i=0;i<k;i++){
        if (maxm<n[i]){
            maxm=n[i];
        }
    }
    printf("%d",maxm);
    return 0;
}    