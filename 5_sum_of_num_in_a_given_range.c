#include<stdio.h>
int main()
{
    int num1, num2, total = 0, i = 0;
    printf("Enter the two numbers: ");
    scanf("%d%d", &num1, &num2);
    for(i = num1; i <= num2; i++)
    {
        total = total + i;
    }
    printf("The sum of number %d and %d in a given range are: %d", num1, num2, total);
    return 0;
}