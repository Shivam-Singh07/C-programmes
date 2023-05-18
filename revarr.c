#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int* ptr=arr;
    for(int i=0,j=n-1;i<=j;i++,j--){
        int temp=ptr[i];
        ptr[i]=ptr[j];
        ptr[j]=temp;
    }
    for(int i=0;i<n;i++) printf("%d ",arr[i]);
    return 0;
}