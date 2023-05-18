#include<stdio.h>
int main(){
    int n1,i,j,n2;
    printf("enter the no of rows and columns::");
    scanf("%d %d",&n1,&n2);
    int p;
    int arr[n1][n2];
    for(i=0;i<n1;i++){
        for(j=0;j<n2;j++){
            scanf("%d",&p);
            arr[i][j]=p;

        }
    }
    // printf("%d",arr[])
    int sum=0;
    for(int k=0;k<n1;k++){
        for(int l=0;l<n2;l++){
            sum+=arr[k][l];
        }
    }
    printf("%d",sum);
    return 0;
}