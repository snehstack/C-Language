#include <stdio.h>
#include <conio.h>


main()

{

    float p, r, n, si;

    clrscr();

    printf("Enter principal amount: ");
    scanf("%f", &p);

    printf("Enter rate of interest: ");
    scanf("%f", &r);

    printf("Enter time in months: ");
    scanf("%f", &n);

    si = (p * r * n) / 100;

    printf("Simple Interest = %.2f", si);

    getch();

}