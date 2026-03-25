#include <stdio.h>

main ()
{
    char str[50];

    printf("Enter any String :");
    scanf("%[^\n]", &str);

    printf("Input String : %s", str);

    for (int i = 0; str[i] != 0; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 32;
        }      
    }

    printf("\n\n");
    printf("Converted Uppercase String : %s", str);
    
}