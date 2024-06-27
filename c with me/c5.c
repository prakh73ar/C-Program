#include <stdio.h>
#include <conio.h>

int main()
{
  int day;

  printf("Enter the day: \n");
  scanf("%d", &day);

  switch (day)
  {
  case 1:
    printf("sunday \n");
    break;

  case 2:
    printf("Monday \n");
    break;

  case 3:
    printf("Tuesday \n");
    break;

  case 4:
    printf("Wednesday \n");
    break;

  case 5:
    printf("Thursday");
    break;

  case 6:
    printf("Friday");
    break;

  case 7:
    printf("Saturday");
    break;

  default:
    printf("chal nikal");
    break;
  }

  return 0;
}