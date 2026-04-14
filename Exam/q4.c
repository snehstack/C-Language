
#include <stdio.h>

main() 
{
    int arr[5] = {1, 2, 3, 4, 5};
    int *p = arr;

    for(int i = 0; i < 5; i++) {
        printf("%d ", (*p) * (*p));
        p++;  
    }

    return 0;
}