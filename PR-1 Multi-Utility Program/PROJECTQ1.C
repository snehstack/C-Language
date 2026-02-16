#include <stdio.h>
#include <conio.h>


main()

{
    float C,F;

    clrscr();

    printf("Enter temperature in celsius\t:");
    scanf("%f",&C);

    F=(9.0/5.0 * C)+ 32;

    printf("The temprature in Fahrenheit=%f",F);

    getch();


}