#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
  int a;
  long int b;
  long long int c;
  char d;
  float e;
  printf("size of a char: %zu  byte(s)\n", sizeof(d));
  printf("size of an int: %zu  byte(s)\n", sizeof(a));
  printf("size of an  long int: %zu  byte(s)\n", sizeof(b));
  printf("size of an long long int: %zu  byte(s)\n", sizeof(c));
  printf("size of a float: %zu  byte(s)\n", sizeof(e));
  return (0);
}
