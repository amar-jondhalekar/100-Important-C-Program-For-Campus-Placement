#include<stdio.h>
int main()
{
    int num1, num2, num3;
    printf("Enter the three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    if(num1 > num2 && num1 > num3)
    {
        printf("%d is greater number.", num1);
    }
    else if(num2 > num1 && num2 > num3)
    {
        printf("%d is greatest number.", num2);
    }
    else if(num3 > num1 && num3 > num2)
    {
        printf("%d is greatest number.", num3);
    }
    else
    {
        printf("%d, %d and %d are equal numbers.", num1, num2, num3);
    }
    
    return 0;
}