#include <stdio.h>
#include <conio.h>

main()


{
    int a,b,c,min;

    clrscr();

    printf("Enter first number\t:");
    scanf("%d", &a);

    printf("Enter second number\t:");
    scanf("%d", &b);

    printf("Enter third number\t:");
    scanf("%d", &c);

    min = (a<b) ? ((a<c) ? a:c) : ((b<c) ? b:c);


    printf("The minimum value is\t:%d", min);

    getch();

}



