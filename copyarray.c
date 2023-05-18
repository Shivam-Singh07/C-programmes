#include<stdio.h>
#include<limits.h>
int main(){
    int k;
    printf("enter the num k::");
    scanf("%d",&k);
    int n[k],i,j,n2=0,p;
    int a=0;
    int f=k-1;
    for(j=0;j<k;j++){
        scanf("%d",&p);
        n[j]=p;
    }
    int brr[k];
    for(int n2=0;n2<k;n2++){
        brr[n2]=n[f];
        f--;
    }
    for(int x=0;x<k;x++){
        printf("%d\n",brr[x]);
    }
    return 0;
}    