#include <stdio.h>

main
()

{
     
    char str[50];
     int i,j;
    

    printf("Enter any string : ");
    scanf("%s", str);

     
    printf("\nFrequency of each letter : \n");

    int len = 0;

    for(i = 0; str[i] != '\0'; i++, len++);
          
          

          for (i = 0; i < len; i++)
          {
               
               if (str [i] == '0')
                    continue;
          

               int count = 1;

               for ( j = i + 1; j < len; j++)
               {
                    if(str[i] == str [j])
                    {

                         count ++;
                         str[j] = '0';

                    }
               }
               
               printf("%c => %d\n", str[i], count);

          }
  
  }          
