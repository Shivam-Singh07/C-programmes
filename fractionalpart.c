#include<stdio.h>
int main(){
    float x,z;
    printf("enter the number::");
    scanf("%f",&x);
    int y=x;
    z=x-y;
    // this z calculation is possible internally y will be converted into float
    

    printf("the fractional part is %f",z);

    return 0;
}