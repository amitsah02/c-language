#include<stdio.h>
void main()
{int a,b,c;
printf("Enter three number");
scanf("%d%d%d",&a,&b,&c);
if((a>b)&&(a>c))
{printf("%d",a);
    printf("a is greater");
}
else if ((b>c)&&(b>a))
 {printf("%d",b);
 printf("b is greater");
 }
else 
{printf("%d",c);
printf("c is greater");}
 }


