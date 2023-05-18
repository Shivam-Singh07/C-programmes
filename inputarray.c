#include<stdio.h>
int main(){
    int n1,i,j,n2;
    int p;
    printf("enter the no of rows and column::");
    scanf("%d %d",&n1,&n2);
    int arr[n1][n2];
    for(i=0;i<n1;i++){
        for(j=0;j<n2;j++){
            scanf("%d",&p);
            arr[i][j]=p;
        }
    }
    printf("\n");
    for(int x=0;x<n1;x++){
        for(int y=0;y<n2;y++){
            printf("%d ",arr[x][y]);
        }
        printf("\n");
    }
    // printf("%d",)
    return 0;
}