#include <stdio.h>

main ()
{
    char str[50];

    printf("Enter any String :");
    scanf("%[^\n]", &str);
    
    printf("\n\n");
    printf("Input String : %s", str);

    for (int i = 0; str[i] != 0; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
        }      
    }

    printf("\n\n");
    printf("Converted Lowercase String : %s", str);
    
}