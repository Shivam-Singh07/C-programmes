#include<stdio.h>
int main(){
    int i,pro,n;
    printf("enter the no:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        
        pro=pro*i;
        printf("the factorial of %d is %d\n",i,pro);
    }
    return 0;
}