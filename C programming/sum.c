#include<stdio.h>
void main()
{int r,s=0,n;
printf("enter any number");
scanf("%d",&n);
while(n>0)
{
r=n%10;
s=s+r;
n=n/10;
}
printf("%d",s);
}