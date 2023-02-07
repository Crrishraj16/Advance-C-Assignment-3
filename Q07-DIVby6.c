// WAP to display the given number is divisible by 6 or not take number with function and pointers.

#include <stdio.h>

void check_divisibility(int *num)
{
    if (*num % 6 == 0)
    {
        printf("The number %d is divisible by 6.\n", *num);
    }
    else
    {
        printf("The number %d is not divisible by 6.\n", *num);
    }
}

int main()
{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    check_divisibility(&num);
    return 0;
}
