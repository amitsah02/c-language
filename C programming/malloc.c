
#include <stdio.h>

void main()
{
    int n, *p, p, i;
    printf("Enter no. of elements");
    scanf("%d", &n);
    p = (int *)malloc(n * (int));
    printf("Enter the elements");
    for (i = 0; i < n; i++)
    {
        scanf("%d", (p + i));
    }
    printf("print all elements");
    for (i = 0; i < n; i++)
    {

printf("%d",(*p+i);
    }
}