#include <stdio.h>

main ()
{


    int row, col;



    printf("Enter number of rows :");
    scanf("%d", &row);
    

    printf("Enter number of columns :");
    scanf("%d", &col);


    int a [row] [col];


    printf("\n\nEnter elements :\n\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Enter a [%d] [%d] :", i, j);
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }


    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == j)
                printf("%d", a[i][j]);
            
            else
                printf("  ");
        }
        printf("\n");
    }
}