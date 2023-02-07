// Write a menu driven program for the equation A=(B+C)*(B-C)/ (B*C) using pointers.

#include <stdio.h>

void calculate_A(int *b, int *c, float *a)
{
    *a = (*b + *c) * (*b - *c) / ((float)*b * *c);
}

int main()
{
    int b, c;
    float a;
    printf("Enter two integer values for B and C: ");
    scanf("%d%d", &b, &c);
    calculate_A(&b, &c, &a);
    printf("A = (B + C) * (B - C) / (B * C) = %f\n", a);
    return 0;
}
