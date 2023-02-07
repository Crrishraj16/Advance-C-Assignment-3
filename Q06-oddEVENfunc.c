// WAP to check the user given number is even or odd using function and pointers.

#include <stdio.h>

void check_even_odd(int *num)
{
    if (*num % 2 == 0)
    {
        printf("The number %d is even.\n", *num);
    }
    else
    {
        printf("The number %d is odd.\n", *num);
    }
}

int main()
{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    check_even_odd(&num);
    return 0;
}
