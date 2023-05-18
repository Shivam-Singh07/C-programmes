#include<stdio.h>
int main(){
    int n1,i,j,n2;
    int n3,n4,n5,n6;
    printf("enter the no of rows and column::");
    scanf("%d %d",&n1,&n2);
    int arr[n1][n2];
    // int arr[n1][n2];
    int p;
    for(i=0;i<n1;i++){
        for(j=0;j<n2;j++){
            scanf("%d",&p);
            arr[i][j]=p;
        }
    }
    int sum=0;
    printf("enter the coordinates::");
    // scanf("%d %d %d %d",&n3,&n4,&n5,&n6);
    scanf("%d,%d,%d,%d",&n3,&n4,&n5,&n6);
    for(int k=n3;k<=n5;k++){
        for(int l=n4;l<=n6;l++){
            sum+=arr[k][l];

        }
    }
    printf("%d",sum);
    return 0;
}