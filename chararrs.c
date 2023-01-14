#include <stdio.h>

int main(void)
{
  char str[] = "JQK";

  printf("%s", str);
  // JQK
  str[2] = 'X';

  printf("%s", str);
  // JQX

  char *newstr = "NEW";
  // const char *newstr = "NEW";
  // this is done for better practice so that the compiler will give an error beforehand
  // and not segfault when it tries to update the value in the constants memory

  printf("%s", newstr);

  // newstr[2] = 'X';
  // some error on above line, either segfault or
  // something else as newstr was made from string literal
  // it stays on constants in the C memory
}