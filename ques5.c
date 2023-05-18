#include<stdio.h>
int main(){
    int r,c;
    scanf("%d%d",&r,&c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int max=0,count=0;
    // int count1=0,count0=0;
    for(int i=0;i<r;i++){
        int count1=0;
        for(int j=0;j<c;j++){
            if(arr[i][j]==1){
                count1++;
            }
            // else if(arr[i][j]==1){
            //     count0++;
            // }
        }
        if(max<count1){
            max=count1;
            count=i;
        }
    }
    printf("%d %d",max,count);
    return 0;
}