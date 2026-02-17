#include <stdio.h>
#include <conio.h>

main()

{
     int n, i = 1;

     clrscr();

     printf("Enter number: ");
     scanf("%d", &n);

     while(i <=n)

     {
	  printf("%d.\t", i);
	  i++;

     }

      getch();

}
