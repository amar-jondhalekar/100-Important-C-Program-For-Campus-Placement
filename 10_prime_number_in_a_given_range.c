#include <stdio.h> 
#include <stdlib.h>
void main()
{
    
//To initialize variables
    int num1, num2, i, j, flag, temp, count = 0;
   
   
//for taking user input
       
    printf("Insert the value of num1 and num2 \n");
    
    scanf("%d %d", &num1, &num2);
   
   
//check condition first range is less than 2 
    
    if (num2 < 2)
    {
        printf("No prime nums found up-to %d\n", num2);
        exit(0);
    }
    
//to display prime numbers
    printf("Prime nums are \n");
    temp = num1;
   
//if num1 modules 2 is equal to zero 
    
    if( num1 % 2 == 0)
    {   


//increment on that number.
        num1++;
    }
  
//use for loop with first rang and second rang
    
    for (i = num1; i <= num2; i = i + 2)
    {
        flag = 0;
        for (j = 2; j <= i / 2; j++)
        {
            if ((i % j) == 0)
            {
                flag = 1;
                break;
            }
        }
     
 //check if flag equal to zero
        
        if (flag == 0)
        {
          //display
            printf("%d\n", i);
            count++;
        }
    }

//display total prime number b/w lie on given range 
    printf("Num of primes between %d & %d = %d\n", temp, num2, count);
}