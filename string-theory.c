#include <stdio.h>
#include <string.h>

char tracks[][30] = {
    "Country roads",
    "Let it Be",
    "Imagine",
    "Yellow Submarine",
    "500 Miles"};

void find_track(char search_for[])
{
  // printf("%s", search_for);
  for (int i = 0; i < 5; i++)
  {
    if (strstr(tracks[i], search_for))
    {
      printf("\n\nFound track at %i : %s", i, tracks[i]);
    }
  }
}

void print_reverse(char *s)
{
  size_t len = strlen(s);

  char *t = s + len - 1;
  while (t >= s)
  {
    printf("%c", *t);
    t = t - 1;
  }

  puts("");
}

int main()
{

  printf("\nThird track is %s", tracks[2]);
  printf("\nFourth track is %s", tracks[3]);
  printf("\n2nd character of the Fourth track is %c", tracks[3][1]);

  //  But how do you look to see if the track name contains a given piece of text ?

  // The strstr() function will search for the second string in the first string.

  // char *res = strstr("dysfunctional", "fun");

  // printf("Found at %i", res); what does this give
  // printf("Found at %p", res);

  char s0[] = "dysfunctional";
  char s1[] = "fun";
  if (strstr(s0, s1))
  {
    printf("\n\nFound %s in %s", s1, s0);
  }

  char searchterm[30];

  printf("\n\nEnter a search term for the song: ");
  fgets(searchterm, sizeof(searchterm), stdin);

  // printf("%s", searchterm);

  // find_track(searchterm);

  print_reverse(searchterm);
}
