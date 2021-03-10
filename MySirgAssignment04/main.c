#include <stdio.h>
#include <stdlib.h>

int main()
{
    //put here any below function and execute that
    return 0;
}

void sum_first_n_natural_numbers()
{
    int n, sum=0;

    printf("Enter a number -> ");
    scanf("%d", &n);

    while(n != 0)
    {
      sum += n;

      n--;
    }
    printf("Sum of n natural numbers -> %d\n", sum);

    return;
}

void print_squares_n_natural_numbers()
{
    int n;

    printf("Enter a number -> ");
    scanf("%d", &n);

    while(n != 0)
    {
      printf("%d\n", n * n);

      n--;
    }

    return;
}

void print_first_n_odd_natural_numbers_reverse()
{
  int n;

  printf("Enter a number -> ");
  scanf("%d", &n);

  while(n != 0)
  {
    if(n % 2 == 1)
      printf("%d\n", n);

    n--;
  }

  return;
}

void print_first_n_odd_natural_numbers()
{
  int i = 0, n;

  printf("Enter a number -> ");
  scanf("%d", &n);

  while(i <= n)
  {

    if(i % 2 == 1)
      printf("%d\n", i);

    i++;
  }

  return;
}

void print_first_ten_odd_natural_numbers_reverse()
{
  int i = 19;

  while(i >= 1)
  {
    if(i % 2 == 1)
      printf("%d\n", i);

    i--;
  }

  return;
}

void print_first_ten_odd_natural_numbers()
{
  int i = 1;

  while(i <= 19)
  {

    if(i % 2 == 1)
      printf("%d\n", i);

    i++;
  }

  return;
}

void print_first_n_even_natural_numbers_reverse()
{
  int n;

  printf("Enter a number -> ");
  scanf("%d", &n);

  while(n != 0)
  {
    if(n % 2 == 0)
      printf("%d\n", n);

    n--;
  }

  return;
}

void print_first_n_even_natural_numbers()
{
  int i = 1, n;

  printf("Enter a number -> ");
  scanf("%d", &n);

  while(i <= n)
  {
    if(i % 2 == 0)
      printf("%d\n", i);

    i++;
  }

  return;
}

void print_first_ten_even_natural_numbers_reverse()
{
  int i = 20;

  while(i >= 1)
  {
    if(i % 2 == 0)
      printf("%d\n", i);

    i--;
  }

  return;
}

void print_first_ten_even_natural_numbers()
{
  int i = 1;

  while(i <= 20)
  {
    if(i % 2 == 0)
      printf("%d\n", i);

    i++;
  }

  return;
}

void print_first_n_natural_numbers_reverse()
{
  int n;

  printf("Enter a number -> ");
  scanf("%d", &n);

  while(n != 0)
  {
    printf("%d\n", n);
    n--;
  }

  return;
}

void print_first_n_natural_numbers()
{
  int i = 1, n;

  printf("Enter a number -> ");
  scanf("%d", &n);

  while(i <= n)
  {
    printf("%d\n", i);
    i++;
  }

  return;
}

void print_first_ten_natural_numbers_reverse()
{
  int i = 10;

  while(i >= 1)
  {
    printf("%d\n", i);
    i--;
  }

  return;
}

void print_first_ten_natural_numbers()
{
  int i = 1;

  while(i <= 10)
  {
    printf("%d\n", i);
    i++;
  }

  return;
}
