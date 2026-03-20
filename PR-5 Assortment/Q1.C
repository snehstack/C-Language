#include <stdio.h>


main()


{

      int size;

      printf("Enter size : ");
      scanf("%d", &size);
       
       
      int a[size];


    printf("Enter element:\n");


    for(int i = 0; i < size; i++)

     {

        printf("a[%d]:",i);
         scanf("%d", &a[i]);

     }
     


     printf("Negative element :");
     for (int i = 0; i < size; i++)
     {
         
        if(a[i] < 0)

        {
            printf("%d",a [i]);
        }
     }
     

}     