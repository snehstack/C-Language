#include <stdio.h>
#include <conio.h>

main()

{

     int a, b;

     clrscr();

     printf("Enter first number\t:");
     scanf("%d", &a);

     printf("Enter second number\t:");
     scanf("%d", &b);

     if (a<b)

     {
	printf("The minimum value is\t:%d", a);

     }

     else

     {

	printf("The minimum value is\t:%d", b);

     }

     getch();

}
