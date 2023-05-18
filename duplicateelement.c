#include<stdio.h>
int main(){
    int n,i,j,n2;
    int arr[7]={1,2,1,4,5,7,8};
    int brr[7];//doubt why not brr[0]
    for(i=0;i<7;i++){
        brr[i]=arr[i];
    }
    // for(int x=0;x<7;x++){
    //     printf("%d\n",brr[x]);
    // }
    printf("\n");
    int sum;
    for(j=0;j<6;j++){
        for(int z=0;z<6;z++){
            if(arr[z]==arr[j] && z!=j){
                printf("%d\n",arr[z]);
                sum=1;
            }
        }
        if (sum==1) break;
        
    }
    
    return 0;
}