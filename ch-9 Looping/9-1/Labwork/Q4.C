#include <stdio.h>
#include <conio.h>


main()

{
     int n;


     clrscr();


     printf("Enter your number\t:");
     scanf("%d", &n);

     if (n %2 == 0)
     n--;


     while (n >=1)

     {

	printf("%d\t", n);
	n -= 2;

     }


     getch();


 }

