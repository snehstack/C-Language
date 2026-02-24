#include <stdio.h>
#include <conio.h>


main()

{

      int num, count = 0;

      clrscr();

      printf("Enter any number: ");
      scanf("%d", &num);


      do{
	 num = num /10;
	 count++;
       }while(num != 0);

       printf("Total number of digits: %d", count);

       getch();

}
