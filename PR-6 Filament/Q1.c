#include <stdio.h>
#include <string.h>


main()

{
     
    char str[20];
    char reverse[20];

    
    printf("Enter any string : ");
    scanf("%s", &str);


    strcpy(reverse, str);
    strrev(reverse);


    int cmp = strcmp(str, reverse);


    if(cmp == 0)
    {

        printf("String is palindrom");

    }
    else
    {

        printf("String is not palindrom");
    }



}