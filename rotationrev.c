#include <stdio.h>

int main()
{
    int k;
    // c=k;
    printf("enter the num k::");
    scanf("%d", &k);
    int n[k], i, j, p;

    

    for (j = 0; j < k; j++)
    {
        scanf("%d", &p);
        n[j] = p;
    }
    
    int c, y;
    int brr[k];
    printf("enter the rotation no::");
    scanf("%d", &c);
    int z;
    if(c>k){
        z=c%k;

    }
    else{
        z=c;
    }
    
        for(int j=0;j<k-z;j++){
            brr[j+z]=n[j];
        }
    
    for(int i=0;i<z;i++){
        brr[i]=n[k-z+i];
    }
    for(int i=0;i<k;i++){
        printf("%d ",brr[i]);
    }
    
    return 0;
}
