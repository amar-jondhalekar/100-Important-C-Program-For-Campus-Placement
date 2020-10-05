#include<stdio.h>
int main()
{
    int number, digit, temp, sum = 0;
    printf("Insert number: ");
    scanf("%d", &number);
    temp = number;
    while(number > 0)
    {
        digit = number % 10;
        sum = sum + digit;
        number = number / 10;
    }
    printf("Given Number is: %d\n", temp);
    printf("Sum of the numbers %d = %d\n", temp, sum);
    return 0;
}