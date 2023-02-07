// WAP to take integer value from the user and create two functions( incre) and (decre) which will increment and decrement the value using functions andpointers.

#include <stdio.h>

void incre(int *x)
{
    (*x)++;
}

void decre(int *x)
{
    (*x)--;
}

int main()
{
    int x;
    printf("Enter an integer: ");
    scanf("%d", &x);
    printf("Original value: %d\n", x);
    incre(&x);
    printf("After increment: %d\n", x);
    decre(&x);
    printf("After decrement: %d\n", x);
    return 0;
}
