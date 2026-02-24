#include <stdio.h>
#include <conio.h>


main()

{

      int num, first, last;

      clrscr();

      printf("Enter any number: ");
      scanf("%d", &num);

      last = num %10;   //last digit

      while(num >= 10)

      {

	 num = num /10;

      }


      first = num;   //first digit

      printf("Sum of first and last digit: %d", first + last);

      getch();

}