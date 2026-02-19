#include <stdio.h>
#include <conio.h>

main()


(

       int n, i, prime = 0;

       clrscr();

       printf("Enter any number\t:");
       scanf("%d", &n);

       i = 1;


       while (i <= n)
	{

	   if(n %i == 0)
	     prime++;


	   i++;
	}


       if (prime == 2)
	  printf("This is Prime Number!!\n");

       else
	  printf("This is not Prime Number!!\n");



	  getch();


}