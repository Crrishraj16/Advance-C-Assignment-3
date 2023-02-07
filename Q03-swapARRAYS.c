// Write a C program to swap two arrays using pointers.

#include <stdio.h>

void swap(int **a, int **b, int n)
{
    int *temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a[] = {1, 2, 3, 4, 5};
    int b[] = {6, 7, 8, 9, 10};
    int n = sizeof(a) / sizeof(a[0]);
    int i;
    printf("Original arrays:\n");
    printf("a: ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
    printf("b: ");
    for (i = 0; i < n; i++)
        printf("%d ", b[i]);
    printf("\n");
    swap(&a, &b, n);
    printf("Swapped arrays:\n");
    printf("a: ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
    printf("b: ");
    for (i = 0; i < n; i++)
        printf("%d ", b[i]);
    printf("\n");
    return 0;
}
