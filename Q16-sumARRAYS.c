// Write a program in C to compute the sum of all elements in an array using pointers

#include <stdio.h>

int sum_of_elements(int *arr, int size)
{
    int i, sum = 0;
    for (i = 0; i < size; i++)
    {
        sum += *(arr + i);
    }
    return sum;
}

int main()
{
    int size, i;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the elements of the array: ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", arr + i);
    }
    int total = sum_of_elements(arr, size);
    printf("Sum of all elements in the array: %d\n", total);
    return 0;
}
