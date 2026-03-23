#include <stdio.h>

main()
{
    int row, col;

    printf("Enter Number of Rows :");
    scanf("%d", &row);

    printf("Enter Number of Columns :");
    scanf("%d", &col);

    int a[row][col];


    printf("\n\nEnter Array elements :\n\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Enter a [%d] [%d] :", i, j);
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }


    int r, c;
    int sum = 0;

    printf("Enter row number:");
    scanf("%d", &r);


    printf("Row elements : ");

        for (int j = 0; j < col; j++)
        {
            printf("%d ", a[r][j]);
            sum +=a[r][j];
        }
        printf("\nSum  of row = %d\n", sum);
    

    printf("Enter column number:");
    for (int i = 0; i < row; i++)
     
        {
             printf("%d ", a[i][c]);
            sum += a[i][c];
        }
        printf("\nSum of column = %d\n", sum);
    
    
      

}    
