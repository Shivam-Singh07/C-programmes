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
    for(int i=0;i<k;i++){
        if(i%2==0){
            n[i]+=10;
        }
        else n[i]=2*n[i];
    }
    for(int z=0;z<k;z++){
        printf("%d\n",n[z]);
    }
    return 0;
}