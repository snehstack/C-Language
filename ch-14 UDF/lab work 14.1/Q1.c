#include <stdio.h>


void main()

{

      int num;

      printf("Enter any number : ");
      scanf("%d", &num);

      cube(num);


}



void cube(int n)
{

     int result;

     result = n * n * n;

     printf("Cube is: %d", result);

}