#include <stdio.h>
void main()
{
    int a[5], i, n, c = 0;
    printf("enter the element of array");
    for (i = 0; i <= 5; i++)
    {scanf("%d",&a[i];
    }
    printf("enter the element of array to be searched");
    scanf("%d", &n);
    for (i = 0; i <= 5; i++)
    {
        if (n == a[i])
        {
            c = 1;
        }
        if (c == 1)
        {
            printf("successfull");
        }
        else
        {
            printf("unsucessfull")
        }