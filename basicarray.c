#include<stdio.h>
int main(){
    // int a[5]={2,4,6,8,1};
    // a[4]=100;
    // printf("%d",a[4]);
    // scanf();
    // float b[3]={1.2,3.2,4.2};
    // printf("%f",b[2]);
    // 2nd method of putting the elements in array;
    int a[5];
    // printf("enter the no :");
    // scanf("%d %d %d",&a[0],&a[1],&a[2]);
    // a[0]=1;
    // a[1]=3;
    // a[2]=4;
    // printf("%d",*a); //doubt heavy doubt
    for(int i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    printf("%d",a[2]);
    return 0;
}