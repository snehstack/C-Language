#include <stdio.h>
#include <conio.h>
#define pf  printf

main()

{
    int a=75,b=111;
    char c='q';

    clrscr();

    pf("Number\t : %d\n",a);
    pf("Char     : %c\n",(char)a);

    pf("Number\t : %d\n",b);
    pf("Char     : %c\n",(char)b);

    pf("Number\t : %d\n",(int)c);
    pf("Char     : %c\n",c);

    getch();


}