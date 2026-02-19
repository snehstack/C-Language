#include <stdio.h>
#include <conio.h>

main()

{

     int i, n;

     clrscr();

     printf("Enter Any Number:");
     scanf("%d", &n);


     for (i = 1; i <=10; i++)
     {
	  printf("\n\t%d * %d =%d", n,i,n * i);

      }


      getch();


}

