#include <stdio.h>
#include <conio.h>

main()


{

   int n, i;

   long long fact =1;

   clrscr();

   printf("Enter any number: ");
   scanf("%d", &n);

   for(i = 1; i <= n; i++)
   {

      fact *= i;

   }


   printf("Factorial = %lld", fact);

   getch();

}