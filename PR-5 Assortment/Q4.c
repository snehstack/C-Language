#include <stdio.h>

main()
{
    int row, col;

    printf("Enter Number of Rows :");
    scanf("%d", &row);

    printf("Enter Number of Columns :");
    scanf("%d", &col);

    int a[row][col];


    printf("\n\nEnter Array elements\n\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Enter a [%d] [%d] :", i, j);
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }


    int row,col = 0;

    printf("\n\nsum of each row\n\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Enter a [%d] [%d] :", i, j);
            scanf("%d", &b[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            sum [i] [j] = a [i] [j] + b [i] [j];
        }
        printf("\n");
    }

    printf("\n\n1st Array Output\n\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d\t", a [i] [j]);
}