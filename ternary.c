#include<stdio.h>
int main(){
    int n;
    printf("enter n");
    scanf("%d",&n);
    // exp1 ? exp2 : exp3
    n%2==0 ? printf("even no"):printf("odd no");
    return 0;
}