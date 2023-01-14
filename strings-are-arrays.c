#include <stdio.h>

int main(void)
{
  char str1[4] = {'a', 'b', 'c', '\0'};
  char str2[4] = "abc";

  printf("STR 1 %s", str1);
  printf("STR 2 %s", str2);
}