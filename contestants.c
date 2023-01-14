#include <stdio.h>
int main()
{
  int contestants[] = {1, 2, 3};                                       // contestants is the memory address of the array pointing to 1
  int *choice = contestants;                                           // choice now points to first element
  contestants[0] = 2;                                                  //{2,2,3}
  contestants[1] = contestants[2];                                     // {2,3,3}
  contestants[2] = *choice;                                            //{2,3,2}
  printf("I'm going to pick contestant number %i\n", contestants[2]);  // so 2 is printed
  printf("I'm going to pick contestant number %i\n", 2 [contestants]); // so 2 is printed
  // contestants[2] = *(contestants + 2) = *(2 + contestants) = 2[contestants]
  return 0;
}
