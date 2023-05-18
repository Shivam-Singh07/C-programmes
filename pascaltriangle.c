#include<stdio.h>
int factorial(n){
    int pro=1;
    for(int i=2;i<=n;i++){

        pro=pro*i;
    }
    return pro;

}
int combination(n,r){
    return factorial(n)/(factorial(r)*factorial(n-r));
}
int main(){
    int n,r,d;
    // printf("enter the no's");
    // scanf("%d %d",&n,&r);
    printf("enter the no of rows::");
    scanf("%d",&d);
    // int ncr=factorial(n)/(factorial(r)*factorial(n-r));
    // printf("%d",ncr);
    r=0;
    int k=1;
    int x=d-1;
    for(int n=0;n<=d-1;n++){
        for(int z=1;z<=x;z++){
            printf(" ");
        }
        x--;
        for(int r=0;r<k;r++){
            printf("%d ",combination(n,r));

        }
        k++;
        printf("\n");
        
        // r++;
    }
}