#include <stdio.h>

// typedef const char *constr;

struct preferences
{
  const char *food;
  float exercise_hours;
};

struct fish
{
  const char *name;
  const char *species;
  int teeth;
  int age;

  struct preferences care; // yes we can nest structs
};

// typedef struct fish
// {
//   const char *name;
//   const char *species;
//   int teeth;
//   int age;

//   struct preferences care; // yes we can nest structs
// } Fish;

// ANY OF THE BELOW WORKS - you can skip the struct name if giving it a typedef

// typedef struct
// {
//   const char *name;
//   const char *species;
//   int teeth;
//   int age;

//   struct preferences care; // yes we can nest structs
// } Fish;

// typedef struct fish Fish;

void catalog(struct fish f)
{
  printf("%s is a %s with %i teeth. He is %i\n", f.name, f.species, f.teeth, f.age);
}

void label(struct fish f)
{
  printf("Name:%s\nSpecies:%s\n%i years old, %i teeth\n", f.name, f.species, f.age, f.teeth);
}

void showPreferences(struct fish f)
{
  printf("\nFavorite food is %s", f.care.food);
  printf("\nExercise Hours is %f", f.care.exercise_hours);
}

int main(int argc, char const *argv[])
{

  struct fish snappy = {"Snappy", "Piranha", 69, 5, {"Meat", 3.5}};

  // Fish snappyFish = {"Snappy", "Piranha", 69, 5, {"Meat", 3.5}};
  // catalog(snappyFish);

  // printf("Fish name: %s Age: %i", snappy.name, snappy.age);
  catalog(snappy);
  label(snappy);

  // when assigning a struct to another struct variable, unlike copying over pointers, we make a new memory and deep copy each of the values.

  // in this case, we copy over each value of the pointers name, species and the values of teeth and age to new memory locations.

  // NOTE: The pointers are copied. Meaning they still point to the same strings in memory.
  struct fish gnasher = snappy;

  showPreferences(gnasher);

  return 0;
}
