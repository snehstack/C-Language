#include <stdio.h>
#include <conio.h>
#define pf printf

main()

{
   int num;

   clrscr();

   pf("Enter your number:");
   scanf("%d",&num);

   if(num > 0)
   {

       pf("This Number is Positive");

   }

   else if(num < 0)

   {

     pf("This Number is Negative");

   }

   else

   {

     pf("This Number is Neutral");

   }

   getch();

}