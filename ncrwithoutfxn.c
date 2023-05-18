#include<stdio.h>
int main(){
    int n,i,j,n2;
    printf("enter the no of rows::");
    scanf("%d",&n);
    
    for(i=0;i<n;i++){
        int a=1;
        for(j=0;j<=i;j++){
            printf("%d",a);
            a=a*(i-j)/(j+1);

        }
        printf("\n");
        
    }
    return 0;
}