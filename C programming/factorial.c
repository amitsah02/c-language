#include <stdio.h>

void main()
{
    int i = 1, n, f = 1;
    printf("enter number:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        f = f * i;
    }
    printf("The Factorial is %d", f);
}