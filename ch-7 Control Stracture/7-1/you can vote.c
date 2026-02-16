#include <stdio.h>
#include <conio.h>
#define pf printf

main()

{

    int age;

    clrscr();

    pf("Enter Your Age\t:");
    scanf("%d",&age);

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