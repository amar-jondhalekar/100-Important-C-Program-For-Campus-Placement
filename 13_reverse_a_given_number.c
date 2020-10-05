#include<stdio.h>
int main()
{
    int number, reverse = 0, store, left;
    printf("Insert number: ");
    scanf("%d", &number);
    store = number;
    while(number > 0)
    {
        left = number % 10;
        reverse = reverse * 10 + left;
        number = number / 10;
    }
    printf("Given number is: %d\n", store);
    printf("it's reverse is: %d\n", reverse);
    return 0;
}