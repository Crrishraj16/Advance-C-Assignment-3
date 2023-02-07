// WAP to calculate Area of Square and circle using Pointer

#include <stdio.h>
#include <math.h>

void square_area(float *l, float *area)
{
    *area = (*l) * (*l);
}

void circle_area(float *r, float *area)
{
    *area = M_PI * (*r) * (*r);
}

int main()
{
    float l, r;
    float area;
    printf("Enter the side length of a square: ");
    scanf("%f", &l);
    square_area(&l, &area);
    printf("Area of the square: %f\n", area);
    printf("Enter the radius of a circle: ");
    scanf("%f", &r);
    circle_area(&r, &area);
    printf("Area of the circle: %f\n", area);
    return 0;
}
