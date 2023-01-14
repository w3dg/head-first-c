#include <stdio.h>
#include <string.h>

typedef struct
{
  int rollno;
  char name[20];
  float cgpa;
} student;

typedef struct
{
  int rollno;
  char *name;
  float cgpa;
} studentModified;

typedef union
{
  int mathMarks;
  float englishMarks;
} studentDetails;

int main(void)
{
  // hmm
  student s1 = {1248, "DG", 1.7};

  printf("%s", s1.name);
  student s2;

  s2.rollno = 1247;
  // s2.name = [ 'D', 'G', '\0' ];
  // s2.name = "DG";
  strcpy(s2.name, "DG");
  s2.cgpa = 1.7;

  studentModified s3;

  s3.name = "DG";
  s3.cgpa = 7.0;
  s3.rollno = 1247;

  // ---------------------------------

  studentModified *ptr;

  ptr->cgpa = 7.0;
  ptr->rollno = 1247;
  ptr->name = "DG";

  // OR

  studentModified *ptr2;
  (*ptr2).cgpa = 7.0;
  (*ptr2).rollno = 8989;
  (*ptr2).name = "DG";

  studentDetails u1 = {12}; // c89 syntax which sets the first one
  // stdentDetails u1 = {.mathMarks = 12};
}
