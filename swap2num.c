#include<stdio.h>
int main(){
    int n,i,j,n2;
    printf("enter the no's");
    scanf("%d %d",&n,&n2);
    int temp;
    temp=n;
    n=n2;
    n2=temp;
    printf("%d %d",n,n2);
    return 0;
}