#include <stdio.h>

struct Salary
{
    int empId;
    char name[50];
    float basic;
    float hra;
    float da;
    float deduction;
    float netSalary;
};

int main()
{
    struct Salary sal[100];
    int n;
    int i;
    int choice;

    n = 0;

    while (1)
    {
        printf("\n1. Add Salary Record\n");
        printf("2. Display All Salary Records\n");
        printf("3. Search Salary Record by Employee ID\n");
        printf("4. Delete Salary Record\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            printf("Enter Employee ID: ");
            scanf("%d", &sal[n].empId);
            printf("Enter Name: ");
            scanf("%s", sal[n].name);
            printf("Enter Basic Salary: ");
            scanf("%f", &sal[n].basic);
            printf("Enter HRA: ");
            scanf("%f", &sal[n].hra);
            printf("Enter DA: ");
            scanf("%f", &sal[n].da);
            printf("Enter Deduction: ");
            scanf("%f", &sal[n].deduction);

            sal[n].netSalary = sal[n].basic + sal[n].hra + sal[n].da - sal[n].deduction;

            n = n + 1;
            printf("Salary Record Added Successfully\n");
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
                    printf("Employee ID: %d\n", sal[i].empId);
                    printf("Name: %s\n", sal[i].name);
                    printf("Basic Salary: %.2f\n", sal[i].basic);
                    printf("HRA: %.2f\n", sal[i].hra);
                    printf("DA: %.2f\n", sal[i].da);
                    printf("Deduction: %.2f\n", sal[i].deduction);
                    printf("Net Salary: %.2f\n", sal[i].netSalary);
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
                if (sal[i].empId == searchId)
                {
                    printf("Salary Record Found\n");
                    printf("Name: %s\n", sal[i].name);
                    printf("Basic Salary: %.2f\n", sal[i].basic);
                    printf("HRA: %.2f\n", sal[i].hra);
                    printf("DA: %.2f\n", sal[i].da);
                    printf("Deduction: %.2f\n", sal[i].deduction);
                    printf("Net Salary: %.2f\n", sal[i].netSalary);
                    found = 1;
                }
            }

            if (found == 0)
            {
                printf("Salary Record Not Found\n");
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
                if (sal[i].empId == deleteId)
                {
                    found = 1;

                    for (j = i; j < n - 1; j = j + 1)
                    {
                        sal[j] = sal[j + 1];
                    }

                    n = n - 1;
                }
            }

            if (found == 1)
            {
                printf("Salary Record Deleted Successfully\n");
            }
            else
            {
                printf("Salary Record Not Found\n");
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