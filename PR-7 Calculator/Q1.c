#include <stdio.h>


int add(int a, int b)
{
    return a + b;

}    
int sub(int a, int b)
{

     return a - b;
}
int mul(int a, int b)
{
    return a * b;

}    
int divi(int a, int b)
{
    return a / b;

}    
int mod(int a, int b)
{
    return a % b;

}    

int main()
{
      int choice, num1, num2, result;

      while (1)
      {
         
        printf("\n- Calculator Menu -");
        printf("\nPress 1 for +");
        printf("\nPress 2 for -");
        printf("\nPress 3 for *");
        printf("\nPress 4 for /");
        printf("\nPress 5 for %%");
        printf("\nPress 0 for exit");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        if (choice == 0)
        {   

          printf("Exiting program...");
          break;
         
        }

        printf("\n");
        printf("Enter the first number: ");
        scanf("%d", &num1);

        printf("Enter the second number: ");
        scanf("%d", &num2);

        switch (choice)
        {
            case 1:
                result = add(num1, num2);
                printf("\nAddition of %d and %d is %d\n", num1, num2, result);
                break;

            case 2:
                result = sub(num1, num2);
                printf("\nSubtraction of %d and %d is %d\n", num1, num2, result);
                break;

            case 3:
                result = mul(num1, num2);
                printf("\nMultiplication of %d and %d is %d\n", num1, num2, result);
                break;

            case 4:
                if (num2 != 0)
                {
                    result = divi(num1, num2);
                    printf("\nDivision of %d and %d is %d\n", num1, num2, result);
                }
                else
                {
                    printf("\nCannot divide by zero!\n");
                }
                break;

            case 5:
                if (num2 != 0)
                {
                    result = mod(num1, num2);
                    printf("\nModulus of %d and %d is %d\n", num1, num2, result);
                }
                else
                {
                    printf("\nCannot find modulus by zero!\n");
                }
                break;
          
            default:
                printf("\nInvalid choice! Try again.\n");
        }
    }
    

}


