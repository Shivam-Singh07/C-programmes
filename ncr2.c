#include<stdio.h>
int factorial(n){
    int pro=1;
    for(int i=2;i<=n;i++){

        pro=pro*i;
    }
    return pro;

}
int main(){
    int n,r;
    printf("enter the no's");
    scanf("%d %d",&n,&r);
    int ncr=factorial(n)/(factorial(r)*factorial(n-r));
    printf("%d",ncr);
}
    
    
  
// int combination(int n, int r){
//     int pro=1,pro2=1,pro3=1;
    
    