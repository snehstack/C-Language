#include <stdio.h>
#include <conio.h>

main ()
{
	int i, j;

	clrscr();

	for (i = 1; i <= 5; i++)
	{
		for (j = i; j <= 5; j++)
		{
		   if (j % 2 == 1)
		      printf("%c\t", 64 + j);

		   else
		      printf("%c\t", 96 + j);
		}
		printf("\n");
	}

	getch();
}