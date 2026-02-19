#include <stdio.h>
#include <conio.h>

main()

{

	int n, rem, sum;

	clrscr();

	printf("Enter Any Number:");
	scanf("%d", &n);

	while (n > 9)
	{
	   sum = 0;

	   while (n !=0)
	{
	   rem = n % 10;
	   sum = sum + rem;
	   n = n / 10;

	}

	   n = sum;
       }

	if (n == 1)
	   printf("This is Magic Number!!\n");

	else
	   printf("This is not Magic Number!!\n");

	getch();


}



