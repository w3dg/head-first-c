#include <stdio.h>

int globalX = 100;

int main(void)
{
  int x = 100;

  printf("Address of x: %p Value of x: %d\n\n", &x, x);
  printf("Address of globalX: %p Value of x: %d", &globalX, globalX);
}