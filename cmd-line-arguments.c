// ./categorize mermaid mermaid.csv Elvis elvises.csv the_rest.csv
#include <stdio.h>

int main(int argc, char *argv[])
{
  printf("Argument Count is %d \n\n", argc);

  for (int i = 0; i < argc; i++)
  {
    printf("%s\n", argv[i]);
  }
}
