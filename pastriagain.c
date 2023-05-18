#include<stdio.h>
int factorial(int a){
    int pro=1;
    for(int i=1;i<=a;i++){
        pro*=i;

    }
    return pro;
}
int ncr(int n,int r){
    int comb=factorial(n)/(factorial(r)*factorial(n-r));
    return comb;
}
int main(){
    int n;
    printf("enter the num:");
    scanf("%d",&n);
    int a,b;
    // printf("enter the num n and r:");
    // scanf("%d %d",&a,&b);
    // printf("%d",ncr(a,b));
    int nsp=n;
    for(int i=0;i<=n;i++){
        for(int j=1;j<=nsp;j++){
            printf(" ");

        }
        nsp--;
        for(int r=0;r<=i;r++){
            printf(" %d",ncr(i,r));
        }
        printf("\n");
    }
    return 0;
}