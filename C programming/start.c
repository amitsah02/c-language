#include <stdio.h>
#include <string.h>
void main()
{
    char A[50];
    int l;
    printf("enter string");
    gets(A);
    l = strlen(A);
    printf("%d", l);
}