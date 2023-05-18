#include<stdio.h>
#include<limits.h>
int c;
void reverse(int n[]){
    // int k;
    // int c;
    for(int i=0,j=8-1;i<j;i++,j--){
        int temp=n[i];
        n[i]=n[j];
        n[j]=temp;
    }

}
int main(){
    int k;
    c=k;
    printf("enter the num k::");
    scanf("%d",&k);
    int n[k],i,j,n2=0,p;
    int a=0;
    int f=k-1;
    int h;
    for(j=0;j<k;j++){
        scanf("%d",&p);
        n[j]=p;
    }
    printf("\n");
    reverse(n);
    for(int x=0;x<k;x++){

        printf("%d\n",n[x]);
}
    return 0;
    
}

    