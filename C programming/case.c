// Online C compiler to run C program online
#include <stdio.h>
void main()
{
    int ch, a, b;
    printf("enter choice"  - add, 2 - subtract, 3 - multiply, 4 - division);

    scanf("%d", &ch);\]
    scanf("%d%d", &a, &b);
    switch (ch)
    {
    case 1:
    {
        int c;
        c = a + b;
        printf("%d", c);
        break;
    }
    case 2:
    {
        int c;
        c = a - b;
        printf("%d", c);
        break;
    }
    case 3:
    {
        int c;
        c = a * b;
        printf("%d", c);
        break;
    }
    case 4:
    {
        int c;
        c = a / b;
        printf("%d", c);
        break;
    }
    default:
    {
        printf("operator is not corredt");

        break;
    }
    }
}