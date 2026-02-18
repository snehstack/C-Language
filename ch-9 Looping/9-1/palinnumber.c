#include <stdio.h>
#include <conio.h>

main()

{

	int n, palin, rem, rev =0;

	clrscr();

	printf("Enter Any Number:");
	scanf("%d", &n);

	palin =n;

	while (n != 0)
	{

	   rem = n%10;
	   rev = rev * 10 + rem;
	   n = n /10;

	}

	printf("Reverse : %d\n", rev);

	if (palin ==rev)
	   printf("This is palindrom Number!!\n");

	else
	   printf("This is not Palindrom Number!!\n");

	getch();


}



