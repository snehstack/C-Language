#include <stdio.h>


int reverseNumber(int num)
{
    int r1, r2, r3, reverse;

    r1 = num % 10;        
    r2 = (num / 10) % 10;
    r3 = num / 100;    

    reverse = r1 * 100 + r2 * 10 + r3;

    return reverse;
}

 main()
 
{
    int num, result;

    printf("Enter a 3 digit number: ");
    scanf("%d", &num);

    result = reverseNumber(num);

    printf("Reversed number = %d", result);


}


