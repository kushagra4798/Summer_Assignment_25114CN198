#include <stdio.h>
#include <string.h>

int main()
{
    int empId[50];
    char empName[50][30];
    float salary[50];
    int n;
    int i;
    int choice;
    int id;
    int found;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter ID of employee %d: ", i + 1);
        scanf("%d", &empId[i]);

        printf("Enter name of employee %d: ", i + 1);
        scanf("%s", empName[i]);

        printf("Enter salary of employee %d: ", i + 1);
        scanf("%f", &salary[i]);
    }

    do
    {
        printf("\n1. Display All Employees\n");
        printf("2. Search Employee by ID\n");
        printf("3. Update Salary\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            for (i = 0; i < n; i++)
            {
                printf("ID: %d, Name: %s, Salary: %.2f\n", empId[i], empName[i], salary[i]);
            }
        }
        else if (choice == 2)
        {
            printf("Enter ID to search: ");
            scanf("%d", &id);

            found = 0;
            for (i = 0; i < n; i++)
            {
                if (empId[i] == id)
                {
                    printf("Name: %s, Salary: %.2f\n", empName[i], salary[i]);
                    found = 1;
                }
            }

            if (found == 0)
            {
                printf("Employee not found.\n");
            }
        }
        else if (choice == 3)
        {
            printf("Enter ID to update salary: ");
            scanf("%d", &id);

            found = 0;
            for (i = 0; i < n; i++)
            {
                if (empId[i] == id)
                {
                    printf("Enter new salary: ");
                    scanf("%f", &salary[i]);
                    found = 1;
                }
            }

            if (found == 0)
            {
                printf("Employee not found.\n");
            }
        }
        else if (choice == 4)
        {
            printf("Exiting program.\n");
        }
        else
        {
            printf("Invalid choice.\n");
        }

    } while (choice != 4);

    return 0;
}