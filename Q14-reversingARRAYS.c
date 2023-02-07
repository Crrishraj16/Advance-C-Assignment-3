// WAP to read integers into an array and reversing them using pointers

#include <stdio.h>

void reverse_array(int *arr, int size)
{
    int i, temp;
    for (i = 0; i < size / 2; i++)
    {
        temp = *(arr + i);
        *(arr + i) = *(arr + size - 1 - i);
        *(arr + size - 1 - i) = temp;
    }
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
    reverse_array(arr, size);
    printf("Reversed array: ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", *(arr + i));
    }
    printf("\n");
    return 0;
}
