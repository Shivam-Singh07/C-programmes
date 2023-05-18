#include<stdio.h>
int main(){
    int a,b;
    printf("enter the two number a and b::");
    scanf("%d%d",&a,&b);
    printf("the rem when %d is divided by %d is %d\n",a,b,a-((a/b)*(b)));
    printf("the rem is %d",a%b);
    return 0;
}