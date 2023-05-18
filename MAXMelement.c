#include<stdio.h>
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
    
    int maxm;
    int c=a+1,u=a;
    for(i=0;i<k-1;i++){
        if(n[c]>n[u]){
            maxm=n[c];
            u=c;
            c=c+1;

            
        }
        else{
            maxm=n[u];
            u=u;
            c+=1;
            
        }
    }
    printf("%d",maxm);
    return 0;
}    