#include <stdio.h>
#include <conio.h>

main()

{
     int n, i = 2;

     clrscr();

     printf("Enter number: ");
     scanf("%d", &n);

     do{
       printf("%d\t\t", i);
       i += 2;

     }while(i <= n);


      getch();


}