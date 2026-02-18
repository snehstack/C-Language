#include <stdio.h>
#include <conio.h>

main()

{

	int i = 1, sum = 0, n;

	clrscr();

	printf("Enter Any Number:");
	scanf("%d", &n);


	while (i <= n)
	{

	   sum = sum +i;
	   i++;

	}

	printf("sum:%d", sum);

	getch();

}



