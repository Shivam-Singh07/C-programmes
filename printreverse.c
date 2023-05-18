#include<stdio.h>
int main(){
    int arr[5];
    int a=1;
    for(int i=0;i<5;i++){
        
        printf("enter the %d element:",a);
        scanf("%d",&arr[i]);
        a+=1;
    }
    for(int j=4;j>=0;j--){
        printf("%d ",arr[j]);
    }
    
    return 0;
}