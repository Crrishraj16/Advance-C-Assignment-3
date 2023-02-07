// Write a menu driven program for addition, subtraction of 5 values usingconcept of pointers and call by value

#include <stdio.h>

int add(int num1, int num2)
{
    return num1 + num2;
}

int subtract(int num1, int num2)
{
    return num1 - num2;
}

int main()
{
    int choice, num1, num2, result, i;
    int numbers[5];
    while (1)
    {
        printf("\nMenu:\n");
        printf("1. Add two numbers\n");
        printf("2. Subtract two numbers\n");
        printf("3. Add 5 numbers\n");
        printf("4. Subtract 5 numbers\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter two numbers: ");
            scanf("%d%d", &num1, &num2);
            result = add(num1, num2);
            printf("Result: %d\n", result);
            break;
        case 2:
            printf("Enter two numbers: ");
            scanf("%d%d", &num1, &num2);
            result = subtract(num1, num2);
            printf("Result: %d\n", result);
            break;
        case 3:
            result = 0;
            printf("Enter 5 numbers: ");
            for (i = 0; i < 5; i++)
            {
                scanf("%d", &numbers[i]);
                result += numbers[i];
            }
            printf("Result: %d\n", result);
            break;
        case 4:
            result = numbers[0];
            printf("Enter 5 numbers: ");
            for (i = 1; i < 5; i++)
            {
                scanf("%d", &numbers[i]);
                result -= numbers[i];
            }
            printf("Result: %d\n", result);
            break;
        case 5:
            return 0;
        default:
            printf("Invalid choice.\n");
        }
    }
    return 0;
}
