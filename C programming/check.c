#include<stdio.h>
Struct student {
Char name [10];
Long int mob;
Int marks;
}x, *ptr;
Void main () {
Printf(“enter the info of students”);
Scanf(“%s %d %d “, &x.name, &x.mob, &x.marks);
Ptr =&x;
Printf(“name of student %s \n mobile no. %d \n marks of student %d \n “, *ptr->name,*ptr->mob, *ptr->marks);
}

