#include <stdio.h>
#include <conio.h>

main()
{
	int moviesection, moviecategory, movie, tickets, members, food, foodqty, timeslot, payment;

	float seatprice = 0, subtotal, foodprice = 0, foodtotal, cgst, sgst, netamount;

	char name [50];

	clrscr();
	textcolor(GREEN);
	cprintf("\n\n WELCOME TO RAJHANS CINEMAS ");
	textcolor(WHITE);
	printf("\n\n\tEnter Your Name :");
	scanf("%s", &name);

	clrscr();
	textcolor(GREEN);
	cprintf("\n\n WELCOME TO RAJHANS CINEMAS ");
	textcolor(WHITE);
	printf("\n\tMovie Section");
	printf("\n\t1. Hoolywood");
	printf("\n\t2. Bollywood");
	printf("\n\t3. Gujarati");
	printf("\n\t4. South");
	printf("\n\tEnter Your Choice :");
	scanf("%d", & moviesection);
	switch (moviesection)
	{
		case 1:
			clrscr();
			textcolor(GREEN);
			cprintf("\n\n WELCOME TO RAJHANS CINEMAS ");
			textcolor(WHITE);
			printf("\n\n\tHollywood Movie Category");
			printf("\n\t1. Action Movies");
			printf("\n\t2. Horror Movies");
			printf("\n\t3. Comedy Movies");
			printf("\n\t4. Romantic Movies");
			printf("\n\t5. Adventure Movies");
			printf("\n\tEnter Your Choice :");
			scanf("%d", &moviecategory);
			switch (moviecategory)
			{
				case 1:
					clrscr();
					textcolor(GREEN);
					cprintf("\n\n WELCOME TO RAJHANS CINEMAS ");
					textcolor(WHITE);
					printf("\n\n\tHOLLYWOOD ACTION MOVIES");
					printf("\n\t1. John Wick: Chapter4");
					printf("\n\t2. Fast&Furious7");
					printf("\n\t3. Mission Impossible - Fallout");
					printf("\n\t4. Avengers: Endgame");
					printf("\n\t5. Mad Max: Fury Road");
					scanf("%d", &movie);
					switch (movie)
					{
						case 1:seatprice = 250; break;
						case 2:seatprice = 200; break;
						case 3:seatprice = 150; break;


					}
					break;
				case 2:
					clrscr();
					printf("\n\n\tHOLLYWOOD HORROR MOVIES");
					printf("\n\t1. The Conjuring");
					printf("\n\t2. The Nun");
					printf("\n\t3. It");
					printf("\n\t4. Insidious");
					printf("\n\t5. Hereditary");
					printf("\n\tEnter Your Choice :");
					scanf("%d", &movie);
					switch (movie)
					{
						case 1:seatprice = 250; break;
						case 2:seatprice = 200; break;
						case 3:seatprice = 150; break;
					}
					break;
				case 3:
					clrscr();
					printf("\n\n\tHOLLYWOOD COMEDY MOVIES");
					printf("\n\t1. The Hangover");
					printf("\n\t2. Mr.Beans's Holiday");
					printf("\n\t3. Rush Hour");
					printf("\n\t4. Johnny English");
					printf("\n\t5. Home Alone");
					printf("\n\tEnter Your Choice :");
					scanf("%d", &movie);
					switch (movie)
					{
						case 1:seatprice = 250; break;
						case 2:seatprice = 200; break;
						case 3:seatprice = 150; break;
					}
					break;
				case 4:
					clrscr();
					printf("\n\n\tHOLLYWOOD  ROMANTIC MOVIES");
					printf("\n\t1. Titanic");
					printf("\n\t2. The Notebook");
					printf("\n\t3. La La Land");
					printf("\n\t4. Me Before You");
					printf("\n\t5. Love Actually");
					printf("\n\tEnter Your Choice :");
					scanf("%d", &movie);
					switch (movie)


					{
						case 1:seatprice = 250; break;
						case 2:seatprice = 200; break;
						case 3:seatprice = 150; break;
					}
					break;

				case 5:
					clrscr();
					printf("\n\n\tHOLLYWOOD  ADVENTURE MOVIES");
					printf("\n\t1. Avatar");
					printf("\n\t2. King Kong");
					printf("\n\t3. Jurassic World");
					printf("\n\t4. Indiana Jones");
					printf("\n\t5. The Mummy");
					printf("\n\tEnter Your Choice :");
					scanf("%d", &movie);
					switch (movie)
					{
						case 1:seatprice = 250; break;
						case 2:seatprice = 200; break;
						case 3:seatprice = 150; break;
					}
					break;

			}
			break;
		case 2:
			clrscr();
			textcolor(GREEN);
			cprintf("\n\n WELCOME TO RAJHANS CINEMAS ");
			textcolor(WHITE);
			printf("\n\n\tBollywood Movie ");
			printf("\n\t1. Action Movies");
			printf("\n\t2. Comedy Movies");
			printf("\n\t3. Romantic Movies");
			printf("\n\t4. Historical Movies");
			printf("\n\t5. Horror Movies");
			printf("\n\tEnter Your Choice :");
			scanf("%d", &moviecategory);
			switch (moviecategory)
			{
				case 1:
					clrscr();
					textcolor(GREEN);
					cprintf("\n\n WELCOME TO RAJHANS CINEMAS ");
					textcolor(WHITE);
					printf("\n\n\tBOLLYWOOD ACTION MOVIES");
					printf("\n\t1. Pathaan");
					printf("\n\t2. War");
					printf("\n\t3. Singham");
					printf("\n\t4. Baaghi2");
					printf("\n\t5. Dhoom3");
					printf("\n\tEnter Your Choice :");
					scanf("%d", &movie);
					switch (movie)
					{
						case 1:seatprice = 250; break;
						case 2:seatprice = 200; break;
						case 3:seatprice = 150; break;

					}
					break;
				case 2:
					clrscr();
					printf("\n\n\tBOLLYWOOD COMEDY MOVIES");
					printf("\n\t1. Hera Pheri");
					printf("\n\t2. Housefull");
					printf("\n\t3. 3Idiots");
					printf("\n\t4. Welcome");
					printf("\n\t5. Golmaal");
					printf("\n\tEnter Your Choice :");
					scanf("%d", &movie);
					switch (movie)
					{
						case 1:seatprice = 250; break;
						case 2:seatprice = 200; break;
						case 3:seatprice = 150; break;
					}
					break;
				case 3:
					clrscr();
					printf("\n\n\tBOLLYWOOD ROMANTIC MOVIES");
					printf("\n\t1. Aashiqui2");
					printf("\n\t2. Veer Zara");
					printf("\n\t3. Kabir Singh");
					printf("\n\t4. Sita Ramam");
					printf("\n\t5. Dilwale Dulhania Le Jayenge");
					printf("\n\tEnter Your Choice :");
					scanf("%d", &movie);
					switch (movie)
					{
						case 1:seatprice = 250; break;
						case 2:seatprice = 200; break;
						case 3:seatprice = 150; break;
					}
					break;
				case 4:
					clrscr();
					printf("\n\n\tBOLLYWOOD HISTORICAL MOVIES");
					printf("\n\t1. Jodhaa Akbar");
					printf("\n\t2. Kesari");
					printf("\n\t3. Padmaavat");
					printf("\n\t4. Bajirao Mastani");
					printf("\n\t5. Manikarnika");
					printf("\n\tEnter Your Choice :");
					scanf("%d", &movie);
					switch (movie)
					{
						case 1:seatprice = 250; break;
						case 2:seatprice = 200; break;
						case 3:seatprice = 150; break;
					}
					break;


				case 5:
					clrscr();
					printf("\n\n\tBOLLYWOOD HORROR MOVIES");
					printf("\n\t1. Stree");
					printf("\n\t2. Raaz");
					printf("\n\t3. Bhoot");
					printf("\n\t4. Bhool Bhulaiyaa");
					printf("\n\t5. 1920");
					printf("\n\tEnter Your Choice :");
					scanf("%d", &movie);
					switch (movie)
					{
						case 1:seatprice = 250; break;
						case 2:seatprice = 200; break;
						case 3:seatprice = 150; break;
					}
					break;
			}
			break;

		case 3:
			clrscr();
			textcolor(GREEN);
			cprintf("\n\n WELCOME TO RAJHANS CINEMAS ");
			textcolor(WHITE);
			printf("\n\n\Gujarati Movie Category");
			printf("\n\t1. Comedy Movies");
			printf("\n\t2. Romantic Movies");
			printf("\n\t3. Family Movies");
			printf("\n\t4. Historical Movies");
			printf("\n\t5. Horror Movies");
			printf("\n\tEnter Your Choice :");
			scanf("%d", & moviecategory);
			switch (moviecategory)
			{
				case 1:
					clrscr();
					textcolor(GREEN);
					cprintf("\n\n WELCOME TO RAJHANS CINEMAS ");
					textcolor(WHITE);
					printf("\n\n\tGUJARATI COMEDY MOVIES");
					printf("\n\t1. Chhello Divas");
					printf("\n\t2. Gujjubhai The Great");
					printf("\n\t3. Fakt Mahilao Maate");
					printf("\n\t4. Shu Thayu");
					printf("\n\t5. Carry On Kesar");
					scanf("%d", &movie);
					switch (movie)
					{
						case 1:seatprice = 250; break;
						case 2:seatprice = 200; break;
						case 3:seatprice = 150; break;


					}
					break;
				case 2:
					clrscr();
					printf("\n\n\tGUJARATI ROMANTIC MOVIES");
					printf("\n\t1. Love Ni Bhavai");
					printf("\n\t2. Sharato Lagu");
					printf("\n\t3. Romance Complicated");
					printf("\n\t4. Prem Prakarn");
					printf("\n\t5. Tari Maate Once More");
					printf("\n\tEnter Your Choice :");
					scanf("%d", &movie);
					switch (movie)
					{
						case 1:seatprice = 250; break;
						case 2:seatprice = 200; break;
						case 3:seatprice = 150; break;
					}
					break;
				case 3:
					clrscr();
					printf("\n\n\tGUJARATI FAMILY MOVIES");
					printf("\n\t1. Chal Jeevi Laiye");
					printf("\n\t2. Reva");
					printf("\n\t3. Better Half");
					printf("\n\t4. Dhunki");
					printf("\n\t5. Teachar of the Year");
					printf("\n\tEnter Your Choice :");
					scanf("%d", &movie);
					switch (movie)
					{
						case 1:seatprice = 250; break;
						case 2:seatprice = 200; break;
						case 3:seatprice = 150; break;
					}
					break;
				case 4:
					clrscr();
					printf("\n\n\tGUJARATI HISSTORICAL MOVIES");
					printf("\n\t1. Hellaro");
					printf("\n\t2. Hirakani");
					printf("\n\t3. Veer Mangdavalo");
					printf("\n\t4. Santu Rangili");
					printf("\n\t5. Raja Bharathari");
					printf("\n\tEnter Your Choice :");
					scanf("%d", &movie);
					switch (movie)


					{
						case 1:seatprice = 250; break;
						case 2:seatprice = 200; break;
						case 3:seatprice = 150; break;
					}
					break;

				case 5:
					clrscr();
					printf("\n\n\tGUJARATI HORROR MOVIES");
					printf("\n\t1. Vash");
					printf("\n\t2. Affraa Taffri");
					printf("\n\t3. Welcome Purnima");
					printf("\n\t4. The Great Ghost");
					printf("\n\t5. Dhingana Horror Night");
					printf("\n\tEnter Your Choice :");
					scanf("%d", &movie);
					switch (movie)
					{
						case 1:seatprice = 250; break;
						case 2:seatprice = 200; break;
						case 3:seatprice = 150; break;
					}
					break;


			}
			break;


		case 4:

			clrscr();
			textcolor(GREEN);
			cprintf("\n\n WELCOME TO RAJHANS CINEMAS ");
			textcolor(WHITE);
			printf("\n\n\South Movie Category");
			printf("\n\t1. Action Movies");
			printf("\n\t2. Comedy Movies");
			printf("\n\t3. Horror Movies");
			printf("\n\t4. Thriller Movies");
			printf("\n\t5. Family Movies");
			printf("\n\tEnter Your Choice :");
			scanf("%d", & moviecategory);
			switch (moviecategory)
			{
				case 1:
					clrscr();
					textcolor(GREEN);
					cprintf("\n\n WELCOME TO RAJHANS CINEMAS ");
					textcolor(WHITE);
					printf("\n\n\tSOUTH ACTION MOVIES");
					printf("\n\t1. KGF Chapter 2");
					printf("\n\t2. Pushpa");
					printf("\n\t3. Leo");
					printf("\n\t4. RRR");
					printf("\n\t5. Vikram");
					scanf("%d", &movie);
					switch (movie)
					{
						case 1:seatprice = 250; break;
						case 2:seatprice = 200; break;
						case 3:seatprice = 150; break;


					}
					break;
				case 2:
					clrscr();
					printf("\n\n\tSOUTH COMEDY MOVIES");
					printf("\n\t1. Doctor");
					printf("\n\t2. Jathi Ratnalu");
					printf("\n\t3. F2 Fun and Frustration");
					printf("\n\t4. Brochevarevarura");
					printf("\n\t5. Ala Vaikunthapurramuloo");
					printf("\n\tEnter Your Choice :");
					scanf("%d", &movie);
					switch (movie)
					{
						case 1:seatprice = 250; break;
						case 2:seatprice = 200; break;
						case 3:seatprice = 150; break;
					}
					break;
				case 3:
					clrscr();
					printf("\n\n\tSOUTH HORROR MOVIES");
					printf("\n\t1. Arundhati");
					printf("\n\t2. Kanchana");
					printf("\n\t3. Chandramukhi");
					printf("\n\t4. Maya");
					printf("\n\t5. Pizza");
					printf("\n\tEnter Your Choice :");
					scanf("%d", &movie);
					switch (movie)
					{
						case 1:seatprice = 250; break;
						case 2:seatprice = 200; break;
						case 3:seatprice = 150; break;
					}
					break;
				case 4:
					clrscr();
					printf("\n\n\tSOUTH THRILLER MOVIES");
					printf("\n\t1. Drishyam");
					printf("\n\t2. Ratsasan");
					printf("\n\t3. Vikram Vedha");
					printf("\n\t4. Hit");
					printf("\n\t5. Agent Sai Srinivasa");
					printf("\n\tEnter Your Choice :");
					scanf("%d", &movie);
					switch (movie)


					{
						case 1:seatprice = 250; break;
						case 2:seatprice = 200; break;
						case 3:seatprice = 150; break;
					}
					break;

				case 5:
					clrscr();
					printf("\n\n\tSOUTH FAMILY MOVIES");
					printf("\n\t1. Sita Ramam");
					printf("\n\t2. Hi Nanna");
					printf("\n\t3. Bommarillu");
					printf("\n\t4. Varisu");
					printf("\n\t5. Maharshi");
					printf("\n\tEnter Your Choice :");
					scanf("%d", &movie);
					switch (movie)
					{
						case 1:seatprice = 250; break;
						case 2:seatprice = 200; break;
						case 3:seatprice = 150; break;
					}
					break;



				}
				break;


	}
	clrscr();
	textcolor(GREEN);
	cprintf("\n\n WELCOME TO RAJHANS CINEMAS ");
	textcolor(WHITE);
	printf("\n\n\tEnter Number of Tickets :");
	scanf ("%d", &tickets);

	printf("\n\n\tEnter Members :");
	scanf("%d", &members);

	clrscr();
	textcolor(GREEN);
	cprintf("\n\n WELCOME TO RAJHANS CINEMAS ");
	textcolor(WHITE);
	printf("\n\n\tFood Menu");
	printf("\n\t1. Popcorn (120)");
	printf("\n\t2. Coke (80)");
	printf("\n\t3. Thumsup (100)");
	printf("\n\t4. Cold Coffee (200)");
	printf("\n\t5. French Fries (170)");
	printf("\n\t6. Samosa (120)");
	printf("\n\t7. Brownie (180)");
	printf("\n\tEnter Food :");
	scanf("%d", &food);

	switch (food)
	{
		case 1:foodprice = 120; break;

		case 2:foodprice = 80; break;

		case 3:foodprice =100; break;

		case 4:foodprice = 200; break;

		case 5:foodprice = 170; break;

		case 6:foodprice = 120; break;

		case 7:foodprice = 180; break;
	}

	printf("\n\n\tEnter Food Quantity :");
	scanf("%d", &foodqty);

	clrscr();
	textcolor(GREEN);
	cprintf("\n\n WELCOME TO RAJHANS CINEMAS ");
	textcolor(WHITE);
	printf("\n\n\tShow Time");
	printf("\n\t1. Morning (8:00 AM)");
	printf("\n\t2. Afternoon (1:00 PM)");
	printf("\n\t3. Evening (4:30 PM)");
	printf("\n\t4. Night (9:00 PM)");
	printf("\n\tEnter Slot Time :");
	scanf("%d", timeslot);


	printf("\n\n\tPayment Method");
	printf("\n\t1. Cash");
	printf("\n\t2. UPI");
	printf("\n\t3. Card");
	printf("\n\tSelect: ");
	scanf("%d", &payment);

	subtotal = (tickets * seatprice) + (foodprice * foodqty);
	cgst = subtotal * 0.09;
	sgst = subtotal * 0.09;
	netamount = subtotal + cgst + sgst;

	clrscr();
       /* printf("\n\n\t======================================");
	printf("\n\n\t-------    RAJHANS CINEMA     -------");
	printf("\n\n\t--------------------------------------");  */
	clrscr();
	textcolor(GREEN);
	cprintf("\n\n        WELCOME TO RAJHANS CINEMAS ");
	textcolor(WHITE);
	printf("\n\n\tCustomer Name : %s", name);
	printf("\n\tTickets       : %d", tickets);
	printf("\n\tSeat Price    : %.2f", seatprice);
	printf("\n\tSub Total     : %.2f", subtotal);
	printf("\n\tCGST (9%%)     : %.2f", cgst);
	printf("\n\tSGST (9%%)     : %.2f", sgst);
	printf("\n\n\t--------------------------------------");
	printf("\n\tNet Amount    : %.2f", netamount);
	printf("\n\tStatus        : CONFIRMED");
	printf("\n\n\t--------------------------------------");
	getch();

	return 0;
}
