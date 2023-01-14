#include <stdio.h>

typedef union
{
  short count;
  float weight;
  float volume;
} quantity;

int main(int argc, char const *argv[])
{
  quantity q = {4}; // C89 version to just initialise with the 1st choice in union

  quantity q2 = {.count = 5};

  quantity q3;
  q3.weight = 30;

  // All give 30 now ??
  // printf("%f", q3.weight);
  // printf("%f", q3.volume);
  // printf("%f", q3.count);

  // Designated Initialisers
  quantity q4 = {.volume = 30};

  // printf("%f", q4.weight); ??

  // designated initialisers can be used in structs as well

  typedef struct
  {
    const char *color;
    int gears;
    int height;
  } bike;

  bike b = {.color = "Turqoise",
            .gears = 5,
            .height = 3};

  printf("%s", b.color);

  // unions can be used with structs

  typedef struct
  {
    const char *name;
    const char *country;

    quantity amount;
  } fruit_order;

  // double designated initialiser
  fruit_order order = {.name = "apples", .country = "England", .amount.weight = 5.0};

  printf("\n\nThis order contains of %f lbs %s for the country %s", order.amount.weight, order.name, order.country);

  return 0;
}
