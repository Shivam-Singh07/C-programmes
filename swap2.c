#include<stdio.h>
int main(){
    int n,i,j,n2;
    printf("enter teh no's");

    scanf("%d %d",&n,&n2);
    n=n+n2;
    n2=n-n2;
    n=n-n2;
    printf("%d %d",n,n2);
    return 0;
}