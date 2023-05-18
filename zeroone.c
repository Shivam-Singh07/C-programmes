#include<stdio.h>
#include<limits.h>
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
    int sum=0;
    int minm=INT_MIN;
    int count=0;
    for(i=0;i<n1;i++){
        sum=0;
        for(j=0;j<n2;j++){
            sum+=arr[i][j];

        } 
        if (minm<sum){
            minm=sum;
            count++;
        }
    } 
    printf("%d %d",minm,count);     

    
    return 0;
}