#include<stdio.h>
int main(){
    int n;
    printf("enter the number::");
    scanf("%d",&n);
    if(n>5 && n<10){
        printf("the number is between 5 and 10 and the num is %d",n);
    }
    return 0;
}