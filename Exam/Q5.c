#include <stdio.h>

int main()
{
    int i, j, num = 10;



    for(i = 1; i <= 5; i++)
    {
            int square = num * num;

        for(j = 1; j <= i; j++)
        {
            printf("%d ", square);
        }

        printf("\n");
        num--;
    }

    
}