#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int even[n];
    int odd[n];
    int ev=0;
    int od=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            even[ev]=arr[i];
            ev++;
        }
        else {
            odd[od]=arr[i];
            od++;
        }
    }
    for(int i=0;i<n-1;i++){
        int p=ev;
        for(int j=0;j<p-1;j++){
            if(even[j]>even[j+1]){
            int temp=even[j];
            even[j]=even[j+1];
            even[j+1]=temp;
            }
        }
        p--;
    }
    for(int i=0;i<n-1;i++){
        int x=od;
        for(int j=0;j<x-1;j++){
            if(odd[j]>odd[j+1]){
            int temp=odd[j];
            odd[j]=odd[j+1];
            odd[j+1]=temp;
            }
        }
        x--;
    }
    for(int i=0;i<ev;i++){
        printf("%d ",even[i]);
    }
    printf("\n");
    for(int i=0;i<od;i++){
        printf("%d ",odd[i]);
    }
    
    return 0;
}