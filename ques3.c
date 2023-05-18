#include<stdio.h>
int main(){
    int n1,i,j,n2;
    int n3,n4;
    
    printf("enter the no of rows and column:");
    scanf("%d %d",&n1,&n2);
    int arr[n1][n2];
    int p;
    for(i=0;i<n1;i++){
        for(j=0;j<n2;j++){
            scanf("%d",&p);
            arr[i][j]=p;
        }
    }
    printf("enter the no of rows and column:");
    scanf("%d %d",&n3,&n4);
    int q;
    int brr[n3][n4];
    for(int x=0;x<n3;x++){
        for(int y=0;y<n4;y++){
            scanf("%d",&q);
            brr[x][y]=q;
        }
    }
    int n5,n6;
    printf("enter the no of rows and column::");
    scanf("%d %d",&n5,&n6);
    int resultrr[n5][n6];
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            resultrr[i][j]=arr[i][j]+brr[i][j];
        }
        
    }
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            printf("%d ",resultrr[i][j]);
        }
        printf("\n");
    }
    return 0;
}