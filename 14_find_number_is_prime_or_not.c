#include<stdio.h>
int main()
{
    int num, rev = 0, store, n1, left;
    printf("Insert number: ");
    scanf("%d", &num);
    n1 = num;
    store = num;
    while(num > 0)
    {
        left = num % 10;
        rev = rev * 10 + left;
        num = num / 10;
    }
    if(n1 == rev)
    {
        printf("Pallindrome numner.");
    }
    else{
        printf("Not pallindrome number.");
    }
    return 0;
}