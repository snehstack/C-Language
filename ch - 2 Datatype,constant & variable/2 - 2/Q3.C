#include <stdio.h>
#include <conio.h>


main()

{
  float b, h, area;

  clrscr();

  printf("Enter base:");
  scanf("%f", &b);

  printf("Enter height: ");
  scanf("%f", &h);

  area = 0.5 * b * h;

  printf("Area of triangle = %.2f", area);

  getch();

}