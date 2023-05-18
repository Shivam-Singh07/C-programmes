#include <stdio.h>
int main()
{
    // int n, i, j, n2;
    // int arr[7] = {1, 2, 3, 4, 3, 2, 1};
    int k;
    printf("enter the num k::");
    scanf("%d", &k);
    int arr[k], i, j, n2 = 0, p;
    int a = 0;
    int f = k - 1;
    int h;
    for (j = 0; j < k; j++)
    {
        scanf("%d", &p);
        arr[j] = p;
    }
    int sum = 0;
    for (i = 0; i < k; i++)
    {
        sum = 0;

        for (j = 0; j < k; j++)
        {

            if ((arr[i] == arr[j]) && i != j)
            {
                sum = 1;
            }
        }
        if (sum == 0)
        {
            // printf("%d", i);
            printf("\n%d", arr[i]);
            // break;
        }
    }

    return 0;
}