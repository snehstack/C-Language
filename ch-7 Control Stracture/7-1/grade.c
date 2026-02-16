#include <stdio.h>
#include <conio.h>
#define pf printf

main()

{

   int mark;

   clrscr();

   printf("Enter marks\t:");
   scanf("%d",&mark);

   if(mark>= 91 && mark<= 100)

   {
   printf("Grade: A1");
   }

   else if(mark>= 81 && mark<= 90)

   {
   printf("Grade: A2");
   }

   else if(mark>= 71 && mark<= 80)

   {
   printf("Grade: B1");
   }

   else if(mark>= 61 && mark<= 70)

   {
   printf("Grade: B2");
   }

   else if(mark>= 51 && mark<= 60)

   {
   printf("Grade: C1");
   }

   else if(mark>= 41 && mark<= 50)

   {
   printf("Grade: C2");
   }

   else if(mark>=33 && mark<=40)

   {
   printf("Grade:D1");

   }

   else if(mark>=0 && mark<=32)

   {
   printf("You are Failed");
   }

   else

   {
   printf("Invalid Marks !!!");
   }

   getch();



}




