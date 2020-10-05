#include<stdio.h>
int main()
{
    int num, div = 0;
    printf("Enter the number: ");
    scanf("%d", &num);
    for(int i = 1; i <= num; i++)
    {
        if(num % i == 0)
        {
            div++;
        }
    }
    if(div == 2)
    {
        printf("%d is prime number.", num);
    }
    else
    {
        printf("%d is not a prime number.", num);
    }
    
    return 0;
}