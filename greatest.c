#include <stdio.h>
int main()
{
    int a, b, c;
    printf("enter the 3 numbers::");
    scanf("%d%d%d", &a, &b, &c);
    if (a > b > c)
    {
        printf("%d is the greatest", a);
    }
    else if (b > c)
    {
        printf("%d is the greatest", b);

    }
    else
    {
        printf("%d is the greatest", c);
    }
    return 0;
}