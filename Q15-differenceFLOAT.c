// WAP to find Difference between two float Pointers

#include <stdio.h>

int main()
{
    float a, b;
    printf("Enter two float values: ");
    scanf("%f%f", &a, &b);
    float *p1 = &a, *p2 = &b;
    int difference = p2 - p1;
    printf("Difference between the two float pointers: %d\n", difference);
    return 0;
}
