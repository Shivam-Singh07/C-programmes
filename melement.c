#include<stdio.h>
#include<limits.h>
int main(){
    int n1,n2;
    int maxm=INT_MIN;
    int count=0;

    
    
    printf("enter the no of rows and colums of first matrix::");
    scanf("%d%d",&n1,&n2);
    int arr[n1][n2];
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    
    
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            if(maxm <arr[i][j]){
                maxm=arr[i][j];
                count+=1;
            }
            // printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("%d %d",maxm,count);
    return 0;
}