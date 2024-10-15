#include<stdio.h>
void main ()

    { int a[3][3],i,j,s=0;
    printf("enter array elements\n");
   for(i=0;i<3;i++)
   {for(j=0;j<3;j++)
   {scanf("%d",&a[i][j]);
   }
   }
   for(i=0;i<3;i++)
   {for(j=0;j<3;j++)
   {if(i==j)
s=s+a[i][j];
   }
   }
   printf("sum of diagonal elements is %d",s);
}
   
