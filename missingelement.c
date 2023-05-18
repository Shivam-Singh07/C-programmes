#include <stdio.h>
#include <stdbool.h>
int check(int arr[], int i, int k)
{
    int sum = 0; // why int sum; not working
    for (int p = 0; p < k; p++)
    {

        if (arr[p] == i)
        {
            sum = 1;

            break;
        }
    }
    if (sum != 1)
    {
        return 0;
    }
    else
        return 1;
}
int main()
{
    int n, i, j, n2;
    int arr[6] = {1, 2, 3, 4, 5, 7};
    
    for (i = 1; i <= 7; i++)
    {
        // printf("%d",check(arr,i,6));
        if (check(arr, i, 6) == 0)
        {
            printf("%d", i);
        }
    }

    return 0;
}