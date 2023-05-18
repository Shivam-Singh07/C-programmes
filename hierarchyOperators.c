#include<stdio.h>
int main(){
    // int i=2*3/4+4/4+8-2+5/8;
    // // we will evaluate left to right and we can convert it into segments separated by + and- as they are at the last in bodmas
    // printf("%d",i);
    int i=2,j=3,k,l;
    float a,b;
    k=i/j*j;
    l=j/i*i;
    a=i/j*j;
    b=j/i*i;
    printf("%d \n%d %f %f",k,l,a,b);
    return 0;
}