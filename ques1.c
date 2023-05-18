#include<stdio.h>
int main(){
    int n,i,j,n2,p;
    printf("enter the no of students::");
    scanf("%d",&n);
    int arr[n][2];
    for (i=0;i<n;i++){
        for(j=0;j<2;j++){
            printf("enter the marks:");
            scanf("%d",&p);
            // printf("enter the roll no:");
            arr[i][j]=p;
        }
    }
    for (i=0;i<n;i++){
        for(j=0;j<2;j++){
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}