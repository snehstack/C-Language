#include <stdio.h>
#include <conio.h>

main()


{
    int a,b,c;

    clrscr();

    printf("Enter first number\t:");
    scanf("%d", &a);

    printf("Enter second number\t:");
    scanf("%d", &b);

    printf("Enter third number\t:");
    scanf("%d", &c);

    if (a<b)

    {

      if(a<c)

      {

	  printf("Enter minimum value is\t:%d", a);

      }

      else

      {

	  printf("Enter minimum value is\t:%d", c);

      }

   }


    else

    {

      if(b<c)

      {

	  printf("Enter minimum value is\t:%d", b);

      }

      else

      {

	  printf("Enter minimum value is\t:%d", c);

      }

   }

       getch();

}