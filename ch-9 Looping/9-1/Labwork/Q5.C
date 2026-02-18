#include <stdio.h>
#include <conio.h>


main()

{

      int i,n;


      clrscr();

      printf("Enter the first year\t:");
      scanf("%d", &i);

      printf("Enter the second year\t:");
      scanf("%d", &n);


      while (i <= n)

      {

	  if (i %4 == 0)

	  {

	    printf("%d\t", i);

	  }
	  i++;

      }


      getch();

}

