#include <stdio.h>

main() 

{
    int a[50], n, i, small;
    
    printf("Enter size: ");
    scanf("%d", &n);
    
    printf("Enter elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    small = a[0];
    
    for(i = 1; i < n; i++) {
        if(a[i] < small) {
            small = a[i];
        }
    }
    
    printf("Smallest element: %d", small);
    
    
}


