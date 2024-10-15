#include <stdio.h>
int stack[5];
int top = -1;
void push();
void pop();
void main()
{

  int ch;
  while (1)
  {
    printf("1 push(),2 pop()");
    scanf("%d", &ch);
    if (ch == 1)
      push();
    if (ch == 2)
      pop();
    printf("do you want to continue");
    scanf("%d", &ch);
    if (ch == 1)
      ;
    break;
  }
}
{
  if (Top == maxsize)
    printf("stack is full");
  else
  {
    Top = Top + 1;
    printf("Enter Data");
    scanf("%d", stack[Top]);
  }
}
}
}