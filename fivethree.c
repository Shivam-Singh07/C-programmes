#include<stdio.h>
int main(){
    int n;
    printf("enter the number::");
    scanf("%d",&n);
    if(n%3==0 || n%5==0){
        printf("the number is div by 3 and 5");


    }
    else{
        printf("the num is not div 5 or 3");
    }
    return 0;
}