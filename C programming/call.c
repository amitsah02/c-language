#include<stdio.h>
void swap(int *a,int *b);
void main ()
{
    int a,b;
    printf("enter  two number ");
    scanf("%d%d",&a,&b);
    swap(&a,&b);
       printf("%d\n%d\n",a,b); }
        
void swap(int *a,int *b)
{
int c;
c=*a;
*a =*b;
*b=c;
printf("%d\n%d\n",(*a),(*b));
}