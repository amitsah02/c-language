#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i=1,f=1;

     
    printf("\n Enter The Number:");
    scanf("%d",&n);
     
    //LOOP TO CALCULATE THE FACTORIAL OF A NUMBER
    do
    {
            f=f*i;
            i++;
    }while(i<=n);
     
    printf(" The Factorial  is %d",f);
}