#include <stdio.h>

// UDF to find cubes using pointer
void cubeArray(int *a, int n)
{
    int i, j;

    printf("\nCubes of array elements:\n");

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            // Access 2D array using pointer
            int value = *(a + i*n + j);
            printf("%d ", value * value * value);
        }
        printf("\n");
    }
}

int main()
{
    int n, i, j;

    printf("Enter array's size: ");
    scanf("%d", &n);

    int a[n][n];

    printf("Enter array elements:\n");

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    // Call UDF using pointer
    cubeArray(&a[0][0], n);

    return 0;
}