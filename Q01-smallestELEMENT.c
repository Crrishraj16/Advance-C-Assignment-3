// WAP to Find Smallest Element Using Pointers

#include <stdio.h>

int find_smallest_element(int *arr, int n)
{
    int i, min = *arr;
    for (i = 1; i < n; i++)
    {
        if (*(arr + i) < min)
        {
            min = *(arr + i);
        }
    }
    return min;
}

int main()
{
    int n, i, arr[100];
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int min = find_smallest_element(arr, n);
    printf("The smallest element in the array is: %d\n", min);
    return 0;
}
