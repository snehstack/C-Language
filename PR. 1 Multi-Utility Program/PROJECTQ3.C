0include <stdio.h>
#include <conio.h>


main()

{

 float first,second,third;

 clrscr();

 printf("Enter first angle =");
 scanf("%f",&first);

 printf("Enter second angle =");
 scanf("%f",&second);

 printf("enter third angle =");
 scanf("%f",&third);

 third = 180 - (first + second);

 printf("Third angleof right triangle =", third);

 getch();

}