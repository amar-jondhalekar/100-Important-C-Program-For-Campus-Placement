#include<stdio.h>
int main()
{
    int num, orignum, remainder, result = 0;
    printf("Insert number: ");
    scanf("%d", &num);
    orignum = num;
    while(orignum != 0)
    {
        remainder = orignum % 10;
        remainder += remainder * remainder * remainder;
        orignum = orignum / 10;
    }
    if(result == num)
    {
        printf("%d is armstrong number.", num);
    }
    else{
        printf("%d is not armstrong number.", num);
    }
    return 0;
}