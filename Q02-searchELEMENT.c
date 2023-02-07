// Write a C program to search an element in array using pointers.

#include <stdio.h>

int search(int *arr, int n, int x)
{
    int *ptr;
    for (ptr = arr; ptr < arr + n; ptr++)
    {
        if (*ptr == x)
            return (ptr - arr);
    }
    return -1;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 3;
    int result = search(arr, n, x);
    if (result == -1)
        printf("Element not found in array\n");
    else
        printf("Element found at index %d\n", result);
    return 0;
}
