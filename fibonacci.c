#include<stdio.h>
int main(){
    int a=1,b=1,sum=1,n;
    printf("enter the num");
    scanf("%d",&n);
    for(int i=1;i<=n-2;i++){
        sum=a+b;
        a=b;
        b=sum;

    }
    printf("%d",sum);
    return 0;
}