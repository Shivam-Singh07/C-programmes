#include <stdio.h>

int main()
{
    int k;
    // c=k;
    printf("enter the num k::");
    scanf("%d", &k);
    int n[k], i, j, p;

    int f = k - 1;

    for (j = 0; j < k; j++)
    {
        scanf("%d", &p);
        n[j] = p;
    }
    int b[k];

    for (int i = 0; i < k; i++)
    {
        b[i] = n[i];
    }
    printf("\n");
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

    for (int z = y - 1; z >= 0; z--, f--)
    {

        n[z] = b[f];
    }
    for (int d = y, e = 0; d < k; d++, e++)
    {
        n[d] = b[e];
    }

    for (int x = 0; x < k; x++)
    {

        printf("%d\n", n[x]);
    }
    return 0;
}
