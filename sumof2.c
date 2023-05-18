#include<stdio.h>
void sum(int a,int b){
    printf("the sum of %d and %d is %d",a,b,a+b);
    return;
}


int main(){
    int a,b;
    printf("enter the numbers::");
    scanf("%d %d",&a,&b);
    sum(a,b);
    return 0;
}