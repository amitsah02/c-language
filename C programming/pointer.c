#include<stdio.h>
void main ()
 {
    int first,second,*p,*q,sum;
  
    printf("enter no");
    scanf("%d%d",&first,&second);
    p=&first;
    q=&second;
    sum=*p + *q;
    printf("sum of the numbers=%d",sum);
 }

 