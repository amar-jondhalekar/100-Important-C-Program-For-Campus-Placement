#include<stdio.h>
int main()
{
    int i, number, fact = 1;
    printf("Enter the number: ");
    scanf("%d", &number);
    for(i = 1; i <= number; i++)
    
        fact = fact * i;

    printf("The factorial of a given number %d is = %d", number, fact);
    return 0;
}