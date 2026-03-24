#include <stdio.h>

main()


{
      
    char str[50];

    printf("Enter any string : ");
    scanf("%[^\n]", &str);


    printf("\n\n");
    printf("string : %s\n", str);


    int len = 0;


    for (int i = 0; str[i] != '\0'; i++, len++);


    printf("string length : %d", len);

}
