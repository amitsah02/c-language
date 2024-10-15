#include <stdio.h>

void main()
{

  int ch, a, b, c;
  printf("Enter choice 1-add,2-sub,3-mult,4-divide,5-mod ");
  scanf("%s%d%d%d", &ch, &a, &b, &c);
  switch (ch)
  {
  case '1':
    c = a + b;
    printf("%d%d", &c);
    break;
  case '2':
    c = a - b;
    printf("%d%d", &c);
    break;
  case '3':
    c = a * b;
    printf("%d%d", &c);
    break;
  case '4':
    c = a / b;
    printf("%d%d", &c);
    break;
  // operator doesn't match any case constant
  default:
    printf("Error! operator is not correct");
  }
}
