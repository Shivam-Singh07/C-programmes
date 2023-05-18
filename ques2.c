#include<stdio.h>
int main(){
    int n1,i,j,n2;
    
    printf("enter the no of rows and column:");
    scanf("%d %d",&n1,&n2);
    int arr[n1][n2];
    for(i=0;i<n1;i++){
        for(j=0;j<n2;j++){
            arr[i][j]=10;
        }
    }
    for(i=0;i<n1;i++){
        for(j=0;j<n2;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}