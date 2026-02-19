#include <stdio.h>
#include <conio.h>

main()

{

     int i, n, a = 0, b =1, c;

     clrscr();

     printf("Enter Any Number\t:");
     scanf("%d", &n);


     for (i = 1; i <=n; i++)
     {
	  printf("%d\t", a);
	  c= a+b;
	  a= b;
	  b= c;

      }


      getch();


}