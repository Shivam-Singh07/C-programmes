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
    
    // for(int i=0;i<r-num;i++){
        int p;
        int t=0;
        for(int i=0;i<r-num;i++){
            p=num+i;
        for(int j=p;j>t && j<r;j--){
            int temp=arr[j];
            arr[j]=arr[j-1];
            arr[j-1]=temp;
            p--;
            
        }
        t++;
        }
        

    // }
    for(int i=0;i<r;i++) printf("%d ",arr[i]);

    return 0;
}