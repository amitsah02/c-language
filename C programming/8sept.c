#include<stdio.h>
#include<string.h>
void main()
{char a[50];
int i=0,count=0;
scanf("%s",&a);
while(a[i]!='/0')
{
    count=count+i;
    i++ ;
}
 printf("%s",a);
}
