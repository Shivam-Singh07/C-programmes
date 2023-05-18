#include<stdio.h>
int main(){
    int n,i,count=0;
    
    printf("enter the num:");
    scanf("%d",&n);
    int g=n;
    for(i=1;n!=0;i++){
        
        n=n/10;
        count++;
    }
    printf("the no of digits in a num %d is %d",g,count);

    return 0;
}