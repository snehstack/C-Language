#include <stdio.h>
#include <conio.h>


main()

{

  float Base,HRA,DA,TA,Gross;

  clrscr();

  printf("Enter Base Salary =");
  scanf("%f",&Base);

  printf("Enter HRA =");
  scanf("%f",&HRA);

  printf("Enter DA =");
  scanf("%f",&DA);

  printf("Enter TA =");
  scanf("%f",&TA);

  Gross = Base + (HRA/100) + (DA/100) + (TA/100);
  printf("Gross salary = ", Gross);

  getch();

}