#include<stdio.h>

void main ()
{   int a[3][3],s=0,i,j;
    printf("enter the array elements\n");
    for(i=0; i<=2; i++)
    {   for(j=0; j<=2; j++)
        {   scanf("%d",&a[i][j]);
        }
    }
    for(i=0; i<=2; i++)
    {   for (j=0; j<=2; j++)
        {   if(i==j)
                s=s+a[i][j];
        }
    }
    printf("sum of diagonal elements is%d",s);
}