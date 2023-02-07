// Write a program to calculate the factorial of an entered number using pointer of a variable containing the entered number.

#include <stdio.h>

long long factorial(int *n)
{
    long long result = 1;
    int i;
    for (i = 1; i <= *n; i++)
    {
        result *= i;
    }
    return result;
}

int main()
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    printf("Factorial of %d: %lld\n", n, factorial(&n));
    return 0;
}
