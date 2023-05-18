#include<stdio.h>
#include<limits.h>
int main(){
    int r,c;
    scanf("%d%d",&r,&c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int min=INT_MAX;
    int max=INT_MIN;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(min>arr[i][j]){
                min=arr[i][j];
            }
            if(max<arr[i][j]){
                max=arr[i][j];
            }
        }
    }
    printf("%d %d",min,max);

    return 0;
}