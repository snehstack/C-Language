#include <stdio.h>
#include <conio.h>

main()

{

	int n, arms, rem, sum =0;

	clrscr();

	printf("Enter Any Number:");
	scanf("%d", &n);

	arms = n;

	while (n != 0)
	{

	   rem = n % 10;
	   sum = sum + (rem * rem * rem);
	   n = n / 10;

	}

	printf("Sum : %d\n", sum);

	if (arms == sum)
	   printf("This is Armstrong Number!!\n");

	else
	   printf("This is not Armstrong Number!!\n");

	getch();


}



