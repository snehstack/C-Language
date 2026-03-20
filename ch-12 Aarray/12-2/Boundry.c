#include <stdio.h>

main()
{


    int array[3][3]; 
    
    int sum = 0;

    printf("Enter number of rows :");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter a [%d] [%d] :", i, j);
            scanf("%d", &array[i][j]);
        }
        printf("\n");
    }

    printf("\n\nBoundry Output\n\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == 0 || j == 0 || i == 3 - 1 || j == 3 - 1)
                printf("%d ", array[i][j]);

            else
                printf("  ");
        }
        printf("\n");
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == 0 || j == 0 || i == 3 - 1 || j == 3 - 1)
                sum += array [i] [j];
        }
    }
    
}