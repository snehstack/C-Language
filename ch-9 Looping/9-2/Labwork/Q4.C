#include <stdio.h>
#include <conio.h>

main()

{
     int n, i;
     int a = 0, b = 1, c;

     clrscr();

     printf("Enter number: ");
     scanf("%d", &n);

     for(i = 1; i <=n; i++)

     {
       printf("%d\t\t", a);
       c = a + b;
       a = b;
       b = c;

     }


      getch();


}