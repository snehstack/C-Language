#include <stdio.h>
#include <conio.h>
#define pf printf

main()

{

    int a,b,c;

    clrscr();

    pf("Enterf First Number :");
    scanf("%d", &a);

    pf("Enter Second Number :");
    scanf("%d", &b);

    pf("Enter Third  Number :");
    scanf("%d", &c);

    if (a==b && a==c && b==c)
    {

       pf("All three numbers are equal!!");

    }

    else if (a==b || a==c || b==c)
    {

       pf("Both numbers are equal!!!");

    }

    if (a>b)

    {
       if (a>c)
       {

	  pf("The maximum number is : %d", a);

       }

       else
       {

	  pf("The maximum number is : %d", c);

       }


    }

      else

	{

	 if (b>c)

	{
	  pf("The maximum number is : %d", b);

	}

       else

       {

	  pf("The maximum number is : %d", c);


       }

    }

    getch();

}