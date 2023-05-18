#include <stdio.h>
int main()
{
    int n1, i, j, n2;
    int n3, n4, n5, n6;
    printf("enter the no of rows and column::");
    scanf("%d %d", &n1, &n2);
    int arr[n1][n2];
    // int arr[n1][n2];
    int p;
    for (i = 0; i < n1; i++)
    {
        for (j = 0; j < n2; j++)
        {
            scanf("%d", &p);
            arr[i][j] = p;
        }
    }
    int sum = 0;
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            if (j>i){

                int temp=arr[i][j];
                arr[i][j]=arr[j][i];
                arr[j][i]=temp;
            }    
        }
    } 
    for (int i = 0; i < n2; i++)
    {
        for (int j = n1-1; j>=0; j--)
        {
            // scanf("%d",&z);
            // brr[j][i] = arr[j][i];
            printf("%d", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
               