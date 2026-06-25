#include <stdio.h>

struct Employee
{
    int id;
    char name[50];
    char department[50];
    float salary;
};

int main()
{
    struct Employee e[100];
    int n;
    int i;
    int choice;

    n = 0;

    while (1)
    {
        printf("\n1. Add Employee\n");
        printf("2. Display All Employees\n");
        printf("3. Search Employee by ID\n");
        printf("4. Delete Employee\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            printf("Enter Employee ID: ");
            scanf("%d", &e[n].id);
            printf("Enter Name: ");
            scanf("%s", e[n].name);
            printf("Enter Department: ");
            scanf("%s", e[n].department);
            printf("Enter Salary: ");
            scanf("%f", &e[n].salary);
            n = n + 1;
            printf("Employee Added Successfully\n");
        }
        else if (choice == 2)
        {
            if (n == 0)
            {
                printf("No Records Found\n");
            }
            else
            {
                for (i = 0; i < n; i = i + 1)
                {
                    printf("ID: %d\n", e[i].id);
                    printf("Name: %s\n", e[i].name);
                    printf("Department: %s\n", e[i].department);
                    printf("Salary: %.2f\n", e[i].salary);
                    printf("-----------------------\n");
                }
            }
        }
        else if (choice == 3)
        {
            int searchId;
            int found;

            found = 0;
            printf("Enter Employee ID to Search: ");
            scanf("%d", &searchId);

            for (i = 0; i < n; i = i + 1)
            {
                if (e[i].id == searchId)
                {
                    printf("Employee Found\n");
                    printf("Name: %s\n", e[i].name);
                    printf("Department: %s\n", e[i].department);
                    printf("Salary: %.2f\n", e[i].salary);
                    found = 1;
                }
            }

            if (found == 0)
            {
                printf("Employee Not Found\n");
            }
        }
        else if (choice == 4)
        {
            int deleteId;
            int found;
            int j;

            found = 0;
            printf("Enter Employee ID to Delete: ");
            scanf("%d", &deleteId);

            for (i = 0; i < n; i = i + 1)
            {
                if (e[i].id == deleteId)
                {
                    found = 1;

                    for (j = i; j < n - 1; j = j + 1)
                    {
                        e[j] = e[j + 1];
                    }

                    n = n - 1;
                }
            }

            if (found == 1)
            {
                printf("Employee Deleted Successfully\n");
            }
            else
            {
                printf("Employee Not Found\n");
            }
        }
        else if (choice == 5)
        {
            printf("Exiting Program\n");
            break;
        }
        else
        {
            printf("Invalid Choice. Try Again\n");
        }
    }

    return 0;
}