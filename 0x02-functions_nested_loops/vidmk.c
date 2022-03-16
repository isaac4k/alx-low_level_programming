#include <stdio.h>
int main()
{
  int number;
  printf("Enter the number=");
  scanf("%d", &number);

  if (number % 2 == 0)
  {
    printf("Number is Even.");
  }
  else
  {
    printf("Number is Odd.");
  }
  return 0;
}