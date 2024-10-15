#include <stdio.h>

void main()
{
    int a[10], i, n;
    printf("enter number");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Display is");
    for (i = 0; i < n; i++)
        printf("%d", a[i]);
}