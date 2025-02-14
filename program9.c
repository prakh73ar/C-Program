#include <stdio.h>
#include <conio.h>

void main()
{
  int maths, physics, chemistry, toatall, maths_and_physics;
  printf("Enter marks of maths");
  scanf("%d", &maths);
  printf("Enter marks of physics");
  scanf("%d", &physics);
  printf("Enter marks of Chemistry");
  scanf("%d", &chemistry);

  toatall = maths + physics + chemistry;
  maths_and_physics = maths + physics;

  if (maths >= 60 && physics >= 50 && chemistry >= 40 && toatall >= 200)
  {
    printf("addmision conferm");
  }

  else if (maths_and_physics >= 150)
  {
    printf("addmision conferm");
  }

  else
  {
    printf("addmision nhu ho payega ");
  }

  getch();
}