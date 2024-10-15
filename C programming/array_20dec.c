#include <stdio.h>

void main()
{
    int a[2][2];
    int i, j;
    printf("ENTER Elements of array");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Array elements");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d/n", a[i][j]);
        }
    }
    printf("/n");
}