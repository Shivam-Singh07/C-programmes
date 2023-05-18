#include<stdio.h>
int main(){
    int r;
    scanf("%d",&r);
    int arr[r];
    for(int i=0;i<r;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter the number::");
    int num;
    scanf("%d",&num);
    int k;
    if(num<r) k=num;
    else k=num%r;
    // int t=r
    for(int i=0;i<k;i++){
        for(int j=r-1;j>0;j--){
            int temp=arr[j];
            arr[j]=arr[j-1];
            arr[j-1]=temp;
        }
    }
    for(int i=0;i<r;i++) printf("%d ",arr[i]);
    return 0;
}