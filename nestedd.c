#include<stdio.h>
int main(){
    int n;
    printf("enter the no::");
    scanf("%d",&n);
    if(n%3==0 || n%5==0){
        if(n%15!=0){
            printf("the no is divisible by 3 or 5 but not 15");
        }
        else{
            printf("the no is divisible by 3 or 5 and 15");
        }
    }
    else{
        printf("the no is not divisible by 3 or 5");
    }
    return 0;
}