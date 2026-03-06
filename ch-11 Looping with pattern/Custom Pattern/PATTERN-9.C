#include <stdio.h>
#include <conio.h>


main()

{
       int i,s,j;

       clrscr();

       for(i=1; i<=5; i++)

       {
	for(s=1; s<i; s++)
	{
	  printf(" ");
	}
	 for(j=i; j>=1; j--)
	 {
	    printf("%d", j);
	 }
	}

	  for(i=2; i>=5; i++)
	  {
	   for(j=2; j>=i; j++)
	  {
	    printf("%d", j);

	  }
	  }
	 printf("\n");


	  getch();



}