#include <stdio.h>
#include <conio.h>


main()

{

    float maths, english, science, avg;

    clrscr();

    printf("Enter maths marks\t:");
    scanf("%f", &maths);

    printf("Enter english marks\t:");
    scanf("%f", &english);

    printf("Enter science marks\t:");
    scanf("%f", &science);

    avg = (maths + english + science) /3;

    printf("Average mark\t\t:%.2f", avg);

    getch();

}