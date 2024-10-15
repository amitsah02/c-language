#include<stdio.h>
struct book
   { 
   char n [50];
   char a [30];
   char p [40];
   int pages ;
   float price ;
   }x[5];
   void main ()
   {int i;
for(i=0;i<=4;i++)
 {  scanf("%s%s%s%d%f",&x[i].n,&x[i].a,&x[i].p,&x[i].pages,&x[i].price);
   }printf("the book details ");
   for(i=0;i<=4;i++)
{
printf("%s\n%s\n%s\n%d\n%f\n",x[i].n,x[i].a,x[i].p,x[i].pages,x[i].price);
}