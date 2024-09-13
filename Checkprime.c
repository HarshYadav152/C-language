
#include <stdio.h>
void main()
{
  int num = 1;
  for (; num <= 10; num++)
  {
    if (num % 2 == 0)
    {
      printf("%d is a prime number\n", num);
    }
    else
      printf("%d is not a prime number\n", num);
  }
}
