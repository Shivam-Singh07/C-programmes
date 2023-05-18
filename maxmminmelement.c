#include <stdio.h>
#include <limits.h>
int main()
{
    int n1, i, j, n2;
    printf("enter the no of rows and columns::");
    scanf("%d %d", &n1, &n2);
    int p;
    int arr[n1][n2];
    for (i = 0; i < n1; i++)
    {
        for (j = 0; j < n2; j++)
        {
            scanf("%d", &p);
            arr[i][j] = p;
        }
    }
    int A = INT_MIN;
    int c = p;
    int count = 0;
    for (int k = 0; k < n1; k++)
    {
        for (int l = 0; l < n2; l++)
        {
            if (A < arr[k][l])
            {
                A = arr[k][l];
                count++;
            }
        }
    }
    printf("%d\n", count);
    
    int z2;
    if (count % n2 == 0)
    {
        z2 = count / n2 - 1;
    }
    int z3;
    if (count % n2 == 0)
    {
        z3 = 3;
    }
    else
        z3 = count % n2;
    printf("%d (%d,%d)", A, z2, z3);

    return 0;
}