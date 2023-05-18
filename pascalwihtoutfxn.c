#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int nsp=n;
    // int i;
    

    for(int i=0;i<=n;i++){
        int p=1;
        for(int k=0;k<=nsp;k++){
            printf(" ");
        }
        nsp--;
        for(int j=0;j<=i;j++){
            printf("%d ",p);
            p=p*(i-j)/(j+1);
        }
        printf("\n");
    }
    return 0;
}