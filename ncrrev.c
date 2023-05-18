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
    int a,b;
    printf("enter the num n and r:");
    scanf("%d %d",&a,&b);
    printf("%d",ncr(a,b));
    return 0;
}