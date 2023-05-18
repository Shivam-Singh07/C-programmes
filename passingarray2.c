#include<stdio.h>
void fun(int a[]){
    int temp=a[0];
    a[0]=a[1];
    a[1]=temp;
}
int main(){
    int n,i,j,n2;
    int a[2]={2,9};
    printf("%d %d",a[0],a[1]);
    fun(a);
    printf("\n%d %d",a[0],a[1]);
    
    // scanf();
    return 0;
}