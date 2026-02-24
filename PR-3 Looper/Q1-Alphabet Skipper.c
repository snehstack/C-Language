#include <stdio.h>
#include <conio.h>


main()

{
       char ch = 'a';

       clrscr();

       do{

	   printf("%c\n", ch);
	   ch = ch + 4; //skip 3 letters (move 4 steps)

	 }while(ch <= 'z');

	 getch();

}