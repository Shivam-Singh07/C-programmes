#include<stdio.h>
int main(){
    int n,i,j,n2,z,m,k;
    int x;

    printf("enter the no of array::");
    scanf("%d",&z);
    int arr[z];
    int sum=0;
    printf("enter the no x::");
    scanf("%d",&x);
    for(m=0;m<z;m++){
        scanf("%d",&k);
        arr[m]=k;
    }
    // for(j=0;j<z-1;j++){

    //     if (arr[j]+arr[j+1]==x){

    //         sum+=1;
    //     }
    // }
    for(i=0;i<z;i++){
        for(j=0;j<z;j++){
            if(arr[i]+arr[j]==x && j>i){
                sum+=1;
                printf("(%d %d)\n",arr[i],arr[j]);
            }
        }
    }
    printf("%d",sum);
    
    
        
    
    return 0;
}