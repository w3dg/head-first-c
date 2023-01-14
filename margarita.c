#include <stdio.h>

typedef union
{
  float lemon;
  int lime_pieces;
} lemon_lime;

typedef struct
{
  float tequila;
  float cointreau;
  lemon_lime citrus;
} margarita;

int main(int argc, char const *argv[])
{
  margarita m1 = {.tequila = 2,
                  .cointreau = 1,
                  .citrus.lemon = 2};

  printf("%2.1f measures of tequila\n%2.1f measures of cointreau\n%2.1f measures of juice\n", m1.tequila, m1.cointreau, m1.citrus.lemon);

  margarita m2 = {2.0, 1.0, {0.5}};

  // THIS IS WRONG,the compiler will only know that its a struct if used on the same line, otherwise, it thinks its  an array
  // margarita m3;
  // m3 = {2.0, 1.0, {0.5}};

  return 0;
}
