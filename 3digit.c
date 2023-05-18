#include<stdio.h>
int main(){
    int n;
    printf("enter the num::");
    scanf("%d",&n);
    if(n/100>=1 && n/100<10){
        printf("the number is 3 digit ::");

    }
    else{
        printf("the num is not 3 digit:");
    }
    return 0;
}