#include <stdio.h>
void germany();
void spain();
void arg();
void main()
{
    germany();
}
void spain()
{
    arg();
    printf("spain");
}
void arg()
{
    printf("arg");
}
void germany()
{
    spain();
    printf("germany");
}