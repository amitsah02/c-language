#include <stdio.h>
struct student
{
    char name[40];
    int roll_no;
    float marks;
} x[10];
void main()
{
    int i;
    printf("Enter student name,roll_no,marks");
    for (i = 0; i <= 9; i++)
    {
        scanf("%s%d%f", &x[i].name, &x[i].roll_no, &x[i].marks);
    }
    printf("enter student details");
    for (i = 0; i < 10; i++)
    {
        printf("%s\n%d\n%f", x[i].name, x[i].roll_no, x[i].marks);
    }
}