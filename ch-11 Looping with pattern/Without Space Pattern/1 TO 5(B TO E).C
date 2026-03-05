#include <stdio.h>
#include <conio.h>


main()


{
      int i,j;

      clrscr();

      for (i = 1; i <=5; i++)
      {

	 for(j = i; j <=5; j++)
	 {

	   if(i %2 == 1)
	     printf("%d\t", j);
	   else
	      printf("%c\t", 64 + j);

	 }
	  printf("\n");

	}
	   getch();


}