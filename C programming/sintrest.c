#include <stdio.h>

void main()
{
    int p, r, t, si;
    printf("Enter principlr,rate and time ");
    scanf("%d%d%d", &p, &r, &t);
    si = (p * r * t) / 100;
    printf("The value of simple intrest is %d", si);
}