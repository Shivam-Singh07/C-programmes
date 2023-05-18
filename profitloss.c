#include<stdio.h>
int main(){
    int cp,sp;
    printf("enter the cost price and selling price::");
    scanf("%d%d",&cp,&sp);
    if(sp>cp){
        printf("the seller has made profit of rs %d",sp-cp);
    }
    else-if(sp==cp){
        printf("neither loss neither profit");

    }
    else{
        printf("the seller has incurred loss of rs %d",cp-sp);
    }
    return 0;
}