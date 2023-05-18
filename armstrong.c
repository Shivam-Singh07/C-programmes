#include<stdio.h>
int main(){
    int n,i,p,q,r=0,c,d,e;
    printf("enter the num::");
    scanf("%d",&n);
    c=n;
    for(i=1;n!=0;i++){
        p=n%10;
        
        q=p*p*p;
        r=r+q;
        n=n/10;
    }
    printf("%d %d\n",r,c);
    if (r==c) printf("armstrong no");
    else printf("not armstrong:!!");
    return 0;
}