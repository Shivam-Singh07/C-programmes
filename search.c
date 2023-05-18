#include <stdio.h>
int main()
{
    int x;
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    printf("enter the no x::");
    scanf("%d", &x);
    int sum = 0;
    for (int i = 0; i < 7; i++)
    {
        if (arr[i] == x)
        {

            sum++;
            printf("%d",i);
        }
    }
    if (sum > 0)
        printf("\nYES");

    else
        printf("NO");
}