#include<stdio.h>
int main(){
    int n;
    printf("enter the no.::");
    scanf("%d",&n);
    if((n%3==0 || n%5==0) && n%15!=0){
        printf("the no %d is divisible by 3 or 5 but not 15",n);
    }
    else{
        printf("not the right no");
    }
    return 0;
}