#include<stdio.h>
void main()
{
    int a[3][3],b[3][3],c[3][3],i,j,k ;
    printf("enter first elements of array\n ");
    for(i=0;i<3;i++)
    {for(j=0;j<3;j++)
    {scanf("%d",&a[i][j]);
    }
    }
  printf("enter second elements of array\n ");
    for(i=0;i<3;i++)
    {for(j=0;j<3;j++)
    {scanf("%d",&b[i][j]);
    }
    }
   for(i=0;i<3;i++)
    {for(j=0;j<3;j++)
{c[i][j]=0;
for(k=0;k<3;k++)
{c[i][j]=c[i][j]+a[i][k]*b[k][j];  
}
}
    }
printf("the result is \n");
for(i=0;i<3;i++)
    {for(j=0;j<3;j++)
    {printf("%d\n",c[i][j]);

    }
    }
    }




