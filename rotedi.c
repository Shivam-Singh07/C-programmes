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
    printf("enter the rotation no::");
    scanf("%d", &c);
    if (c > k)
    {
        y = c % k;
    }
    else
    {
        y = c;
    }
    for(int i=0,j=k-1;i<=j;i++,j--){
        int temp=n[i];
        n[i]=n[j];
        n[j]=temp;
    }
    for(int i=0,j=y-1;i<=j;i++,j--){
        int temp=n[i];
        n[i]=n[j];
        n[j]=temp;
    }
    for(int i=y,j=k-1;i<=j;i++,j--){
        int temp=n[i];
        n[i]=n[j];
        n[j]=temp;
    }
    for(int i=0;i<k;i++){
        printf("%d ",n[i]);
    }


    return 0;
}
