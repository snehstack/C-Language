#include <stdio.h>
#include <conio.h>


main()

{
  float r, area;
  float pi = 3.14;

  clrscr();

  printf("Enter radius: ");
  scanf("%f", &r);

  area = pi * r * r;

  printf("Area of circle = %.2f", area);

  getch();

}






