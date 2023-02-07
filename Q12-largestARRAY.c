// Write a program to find the largest element within an integer array using pointers.

#include <stdio.h>

int find_largest(int *arr, int size)
{
    int i, max = *arr;
    for (i = 1; i < size; i++)
    {
        if (*(arr + i) > max)
        {
            max = *(arr + i);
        }
    }
    return max;
}

int main()
{
    int arr[] = {1, 5, 2, 9, 3, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    int largest = find_largest(arr, size);
    printf("Largest element in the array: %d\n", largest);
    return 0;
}
