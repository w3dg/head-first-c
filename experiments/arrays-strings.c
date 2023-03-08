#include <stdio.h>

void fortune_cookie(char msg[])
{
  printf("%s", msg);
  printf("Size of the message %d", sizeof(msg));
}

int main()
{
  char quote[] = "Cookies make you fat";
  printf("Quote size of %d", sizeof(quote));
  fortune_cookie(quote);

  int a = 6;
  int *p = &a;

  printf("%d", sizeof(p));
}
