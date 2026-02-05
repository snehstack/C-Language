#include <stdio.h>
#include <conio.h>

main()

{
   float r, perimeter;
   float pi = 3.14;

   clrscr();

   printf("Enter radius: ");
   scanf("%f", &r);

   perimeter = 2 * pi * r;

   printf("Perimeter of circle =%.2f", perimeter);

   getch();

}