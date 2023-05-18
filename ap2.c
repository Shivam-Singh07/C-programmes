#include<stdio.h>
int main(){
    int i,n;
    printf("enter the no::");
    scanf("%d",&n);
    // for(i=4;i<=(3*n)+1;i=i+3){
    //     printf("%d,",i);

    // }
    // f
    int a=4;
    for(i=1;i<=n;i++){
        printf("%d ",a);
        a=a+3;
    }   
       
    return 0;
}