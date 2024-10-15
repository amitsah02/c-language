#include <stdio.h>
int fibo(int n);
void main()
{
  int n, s;
  printf("enter number of terms ");
  scanf("%d", &n);
  s = fibo(n);
  printf("%d", s);
}

int fibo(int n)
{
  if (n <= 0)
    return 0;
  if (n == 1)
    return 0;
  if (n == 2)
    return 1;
  else
    return fibo(n - 1) + fibo(n - 2);
}