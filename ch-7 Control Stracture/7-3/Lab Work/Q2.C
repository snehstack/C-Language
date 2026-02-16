#include <stdio.h>
#include <conio.h>

main()


{
    int lang, choice;

    clrscr();

    printf("Press 1 for English\n");
    printf("Press 2 for Hindi\n");
    printf("Press 3 for Gujarati\n");
    printf("Enter your choice: ");
    scanf("%d", &lang);

    switch(lang)

    {


       case 1:

	     clrscr();
	     printf("1. Internet Recharge\n");
	     printf("2. Top-up Recharge\n");
	     printf("3. Special Recharge\n");
	     printf("Enter your choice:");
	     scanf("%d", &choice);

	     switch(choice)

	     {
		 case 1:
		 clrscr();
		 printf("You selected Internet Recharge");
		 break;

		 case 2:
		 clrscr();
		 printf("You have successfully done a Top-up Recharge");
		 break;

		 case 3:
		 clrscr();
		 printf("You selected special Recharge");
		 break;

		 default:

		 printf("Invalid choice");

	     }
	     break;


	    case 2:

	      clrscr();
	      printf("Internet Recharge ke liye 1 dabaiye\n");
	      printf("Top-up Recharge ke liye 2 dabaiye\n");
	      printf("Special Recharge ke liye 3 dabaiye\n");
	      printf("Enter your choice:");
	      scanf("%d", &choice);


	      switch(choice)

	      {

		  case 1:
		  clrscr();
		  printf("Aapne safaltapoorvak Internet Recharge kar liya hai!!");
		  break;

		  case 2:
		  clrscr();
		  printf("Aapne safaltapoorvak Top-up Recharge kar liya hai!!");
		  break;

		  case 3:
		  clrscr();
		  printf("Aapne safaltapoorvak Special Recharge kar liya hai!!");
		  break;

		  default:
		  printf("Invalid choice");

	       }
	       break;


	     case 3:

	       clrscr();
	       printf("Internet Recharge mate 1 dabavo\n");
	       printf("Top-up Recharge mate 2 dabavo\n");
	       printf("Special Recharge mate 3 dabavo\n");
	       printf("Enter your choice:");
	       scanf("%d", &choice);

	       switch(choice)
	       {

		  case 1:
		  clrscr();
		  printf("Tame safaltapurvak Internet Recharge karyu chhe!!");
		  break;

		  case 2:
		  clrscr();
		  printf("Tame safaltapurvak Top-up Recharge karyu chhe!!");
		  break;

		  case 3:
		  clrscr();
		  printf("Tame safaltapurvak special Recharge karyu chhe!!");
		  break;

		  default:
		  printf("Invalid choice");

	       }
	       break;

	       default:
	       printf("Invalid language choice");


	 }


       getch();

}

