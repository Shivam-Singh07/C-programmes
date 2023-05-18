#include<stdio.h>
int combination(int n, int r){
    int pro=1,pro2=1,pro3=1;
    for(int i=2;i<=n;i++){
        pro=pro*i;
    }
    for(int j=2;j<=r;j++){
        pro2*=j;
    }
    for(int k=2;k<=n-r;k++){
        pro3*=k;
    }
    return (pro)/(pro2*pro3);
}
int main(){
    int n,i,j,n2;
    printf("enter the no's::");
    scanf("%d %d",&n,&n2);
    printf("%d\n",combination(n,n2));
    int com=combination(n,n2);
    printf("%d",com);
    // doubt clear
    return 0;
}