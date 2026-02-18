#include <stdio.h>
#include <conio.h>

main()

{

	int n, mag, rem, sum = 0;

	clrscr();

	printf("Enter Any Number:");
	scanf("%d", &n);

	mag = n;

	while (n != 0)
	{

	   rem = n % 10;
	   sum = sum + (rem * rem * rem);
	   n = n / 10;

	}

	printf("Sum : %d\n", sum);

	if (mag == sum)
	   printf("This is Magic Number!!\n");

	else
	   printf("This is not Magic Number!!\n");

	getch();


}



