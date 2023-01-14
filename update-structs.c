#include <stdio.h>

typedef struct
{
  const char *name;
  const char *species;
  int age;
} turtle;

void happy_birthday(turtle t)
{
  t.age = t.age + 1;
  printf("\nHAPPY BIRTHDAY %s, you are %i old!", t.name, t.age);
}

void happy_birthday_pointers(turtle *t) // t is now  a pointer to the struct
{

  // *t.age or *(t.age) is not same as (*t).age

  // (*t).age = (*t).age + 1;
  // printf("HAPPY BIRTHDAY %s, you are %i old!", (*t).name, (*t).age);

  // t-><property> means the actual property of the struct pointed to by `t`
  t->age = t->age + 1;
  printf("\nHAPPY BIRTHDAY %s, you are %i old!", t->name, t->age);
}

int main()
{

  turtle myrtle = {
      "Myrtle",
      "Leatherback Sea Turtle",
      99};

  /*
  HAPPY BIRTHDAY Myrtle, you are 100 old!
  Myrtle, you are 99 old!
  */
  happy_birthday(myrtle);
  printf("\n%s, you are %i old!", myrtle.name, myrtle.age);

  happy_birthday_pointers(&myrtle); // we pass it by reference
  printf("\n%s, you are %i old!", myrtle.name, myrtle.age);

  return 0;
}
