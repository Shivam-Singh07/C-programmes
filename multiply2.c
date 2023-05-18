#include <stdio.h>
#include <limits.h>
int main()
{
    int n1,n2;
    printf("enter the no of rows and columns::");
    scanf("%d %d", &n1, &n2);
    int p;
    int arr[n1][n2];
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            scanf("%d", &p);
            arr[i][j] = p;
        }
    }
    int n3,n4;
    
    int q;
    printf("enter the no of rows and columns::");
    
    scanf("%d %d", &n3, &n4);
    // if (n2!=n3){
        
    // }
    int brr[n3][n4];
    for (int i = 0; i < n3; i++)
    {
        for (int j = 0; j < n4; j++)
        {
            scanf("%d", &q);
            brr[i][j] = q;
        }
    }
    int sum=0;
    int crr[n1][n4];
    for(int i=0;i<n1;i++){
        for(int j=0;j<n4;j++){
            sum=0;
            
            for(int l=0;l<n2;l++){

                sum+=arr[i][l]*brr[l][j];
            }
            printf("\n  %d",sum);

            crr[i][j]=sum;
        }
    }
    printf("hello\n");
    for(int i=0;i<n1;i++){
        for(int j=0;j<n4;j++){
            printf("%d ",crr[i][j]);
        }
        printf("\n");
    }
    return 0;
}    