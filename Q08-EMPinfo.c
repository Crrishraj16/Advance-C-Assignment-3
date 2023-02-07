// WAP to take employee’s personal information as employeeid(int), gender(char: M or F), salary(float). Display it using pointers.

#include <stdio.h>

void display_employee_info(int *id, char *gender, float *salary)
{
    printf("Employee ID: %d\n", *id);
    printf("Gender: %c\n", *gender);
    printf("Salary: %.2f\n", *salary);
}

int main()
{
    int id;
    char gender;
    float salary;

    printf("Enter employee ID: ");
    scanf("%d", &id);
    printf("Enter gender (M/F): ");
    scanf(" %c", &gender);
    printf("Enter salary: ");
    scanf("%f", &salary);

    display_employee_info(&id, &gender, &salary);
    return 0;
}
