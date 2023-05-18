#include<stdio.h>
int main(){
    int l,b;
    printf("enter the length and breadth::");
    scanf("%d%d",l,b); 
    if(l*b>2*(l+b)){
        printf("the area of the rectangle is greater than its perimeter::");

    }
    else{
        printf("not greater");
    }
    return 0;
}