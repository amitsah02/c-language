#include <stdio.h>

void main()
{
    int a[5], i, flag = 0, pos, ele;
    printf("Enter elements");
    scanf("%d", &ele);
    for (i = 0; i < 5; i++)
    {
        if (ele == a[i])
        {
            flag = 1;
            pos = i;
        }
    }
    if (flag == 1)
        printf("element found in %d", pos + 1);
    else
        printf("No element found");
}