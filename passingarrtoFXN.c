#include<stdio.h>
void fun(int arr[]){
    arr[1]=10;
    return;

}
int main(){
    int n,i,j,n2;
    int arr[5]={1,2,3,4,5};
    printf("%d",arr[1]);
    fun(arr);

    printf("%d",arr[1]);
    // scanf();
    return 0;
}