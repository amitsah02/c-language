#include <stdio.h>
void main()
{
  int a,b,c;
  printf("enter number a:");
  scanf("%d",&a);
  printf("enter number b");
  scanf("%d",&b);
  printf("enter number c");
  scanf("%d",&c);
  if(a>b&a>c)
  printf("%d is greater",a);
if(b>a&b>c)
printf("%d is greater",b);
if(c>a&c>b)
printf("%d is greater",c);
}