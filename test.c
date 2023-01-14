#include <stdio.h>
void main()
{
  char s[3][100], c[100];
  int a = 0, i, l, k, j, co[3];
  printf("Enter 3 strings\n");
  for (i = 0; i < 3; i++)
    gets(s[i][0]);
  for (i = 0; i < 3; i++)
  {
    if (s[i][0] >= 'a' && s[i][0] <= 'z')
    {
      co[i] = i;
      s[i][0] = (s[i][0] - 32);
    }
  }
  for (i = 1; i < 3; i++)
  {
    k = 0;
    while (s[i][k] != '\0')
    {
      l++;
      k++;
    }
    for (j = 0; j < l; j++)
    {
      if (s[i - 1][j] > s[i][j])
        a = 0;
      if (a = 1)
      {
        c[j] = s[i - 1][j];
        s[i - 1][j] = s[i][j];
        s[i][j] = c[j];
      }
      break;
    }
  }
  for (i = 0; i < 3; i++)
  {
    if (i == co[i])
      s[i][0] = (s[i][0] + 32);
  }
  for (i = 0; i < 3; i++)
    puts(s[i][0]);
}