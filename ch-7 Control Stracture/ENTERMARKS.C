#include <stdio.h>
#include <conio.h>

main()

{

   int marks;

   clrscr();

   printf("Enter marks : ");
   scanf("%d",&marks);

   if(marks >= 91 && marks <= 100);

   {
   printf("Grade: A1\n");
   }

   if(marks >= 81 && marks <= 90);

   {
   printf("Grade: A2\n");
   }

   if(marks >= 71 && marks <= 80);

   {
   printf("Grade: B1\n");
   }

   if(marks >= 61 && marks <= 70);

   {
   printf("Grade: B2\n");
   }

   if(marks >= 51 && marks <= 60);

   {
   printf("Grade: C1\n");
   }

   if(marks >= 41 && marks <= 50);

   {
   printf("Grade: C2\n");
   }


   getch();

}
