#include<stdio.h>

void main(){
    float tax=0,income;
    printf("enter your  income ");
    scanf("%d",income);
    if(income>=250000 && income<=500000)
    {tax=tax+0.05*(income-250000);
    }
if(income>=500000 && income<=1000000)
{ 
    tax=tax + 0.20 *(income-500000);
}
if(income>=1000000)
{
tax= tax + 0.30 *(income-1000000);
}
printf("your net income tax to be paid by 26th of this month is %f\n",tax);
}