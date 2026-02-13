#include <stdio.h>
#include <conio.h>
#define pf printf
#define sc scanf


main()

{

    int age;

    clrscr();

    pf("Enter Your Age\t:");
    sc("%d",&age);
    if(age>=18)
    {

	pf("YOU Can Vote!!");

    }

    else

    {

       pf("You Cannot Vote!!!!!");

    }

    getch();


}