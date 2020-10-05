#include<stdio.h>
int main()
{
    int sum = 0, num;
    printf("Enter the first n natural number: ");
    scanf("%d", &num);

    sum = num*(num+1)/2;
    printf("The natural number are: %d", sum);
    return 0;
}