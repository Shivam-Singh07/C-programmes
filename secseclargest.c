#include<stdio.h>
#include<limits.h>
int main(){
    int k;
    printf("enter the num k::");
    scanf("%d",&k);
    int n[k],i,j,n2=0,p;
    int a=0;
    for(j=0;j<k;j++){
        scanf("%d",&p);
        n[j]=p;
    }
    int z;
    int x=0;
    
    int maxm=n[0];
    int secondmax=INT_MIN;
    for(i=1;i<k;i++){
        if (maxm<n[i]){
            secondmax=maxm;
            maxm=n[i];
            
        }
        // else {secondmax=n[i];
        // break;
        // }
        else if(secondmax<n[i] && n[i]<maxm){
            secondmax=n[i];
        }
        
        // if (secondmax<n[i] && n[i]<maxm){
        //     secondmax=n[i];
        // }
    }
    // for(i=1;i<k;i++){
    //     if(secondmax<n[i] && n[i]<maxm){
    //         secondmax=n[i];

    //     }

    // }
    printf("%d\n",secondmax);
    
    printf("%d",maxm);
    return 0;
}