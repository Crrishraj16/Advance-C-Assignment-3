// WAP to check whether given number is odd, even or zero Using concept of Pointers and call by refernce

#include <stdio.h>

void check_number(int *num)
{
    if (*num == 0)
    {
        printf("The number is zero.\n");
    }
    else if (*num % 2 == 0)
    {
        printf("The number is even.\n");
    }
    else
    {
        printf("The number is odd.\n");
    }
}

int main()
{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    check_number(&num);
    return 0;
}
