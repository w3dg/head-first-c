#include <stdio.h>

typedef union
{
  float weight;
  int count;
} cupcake;

int main(int argc, char const *argv[])
{
  cupcake order = {2};                             // setting weight according to the C89 syntax
  printf("Cupcakes quantity: %f\n", order.weight); // we set the weight
  printf("Cupcakes quantity: %i\n", order.count);  // we havent set count

  // ENUMS to keep track of set vars in a union

  typedef enum colorsEnum
  {
    RED,
    YELLOW,
    GREEN
  } colors;

  colors c = GREEN;

  return 0;
}
