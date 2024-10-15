#include <stdio.h>
Struct book {
Char b_name[20];
Char a_name[10];
Float price;
Int page;
};
Void main () {
    struct book x,y,z;
    struct book *ptr1,*ptr2,*ptr3;
     int ptr1=&x;
     int ptr2=&y;
    int ptr3=&z;
Printf("enter the information of first book" );
Scanf("%s%s%f%d",&ptr1->B_name,&ptr1->a_name, &ptr1->price, &ptr1->page);
printf("the details of first book is:%s/n%s/n%f/n%d/n",ptr1->B_name,ptr1->a_name, ptr1->price, ptr1->page);
Printf("enter the information of second book ");
Scanf("%s%s%f%d", &ptr2->B_name,&ptr2->a_name, &ptr2->price, &ptr2->page);
printf("the details of second book is:%s/n%s/n%f/n%d/n",ptr2->B_name,ptr2->a_name, ptr2->price, ptr3->page);
Printf("enter the information of Third book ");
Scanf("%s%s%f%d",&ptr3->B_name,&ptr3->a_name, &ptr3->price, &ptr3->page);
printf("the details of Third book is :",%s/n%s/n%f/n%d/n,ptr3->B_name,ptr3->a_name, ptr3->price, ptr3->page); 
}