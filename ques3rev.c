#include<stdio.h>
int main(){
    int n1,n2;
    
    
    printf("enter the no of rows and colums of first matrix::");
    scanf("%d%d",&n1,&n2);
    int arr[n1][n2];
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("enter the no of rows and colums of second matrix::");
    int n3,n4;
    
    scanf("%d%d",&n3,&n4);
    int brr[n3][n4];
    
    for(int i=0;i<n3;i++){
        for(int j=0;j<n4;j++){
            scanf("%d",&brr[i][j]);
        }
    }
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            arr[i][j]+=brr[i][j];
        }
    }
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}