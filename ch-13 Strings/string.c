#include <stdio.h>

main()

{

      char fname[20];
      char lname[20];



      printf("Enter your first name : ");
      scanf("%[^\n]", &fname);


      fflush(stdin);


     printf("Enter your last name : ");
      scanf("%[^\n]", &lname);


      printf("\n\n");

     printf("my first name is %s\n", fname);
     printf("my last name is %s\n", lname);




}