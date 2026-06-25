#include <stdio.h>

struct Student
{
    int roll;
    char name[50];
    float marks;
};

int main()
{
    struct Student s[100];
    int n;
    int i;
    int choice;

    n = 0;

    while (1)
    {
        printf("\n1. Add Student\n");
        printf("2. Display All Students\n");
        printf("3. Search Student by Roll Number\n");
        printf("4. Delete Student\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            printf("Enter Roll Number: ");
            scanf("%d", &s[n].roll);
            printf("Enter Name: ");
            scanf("%s", s[n].name);
            printf("Enter Marks: ");
            scanf("%f", &s[n].marks);
            n = n + 1;
            printf("Student Added Successfully\n");
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
                    printf("Roll No: %d\n", s[i].roll);
                    printf("Name: %s\n", s[i].name);
                    printf("Marks: %.2f\n", s[i].marks);
                    printf("-----------------------\n");
                }
            }
        }
        else if (choice == 3)
        {
            int searchRoll;
            int found;

            found = 0;
            printf("Enter Roll Number to Search: ");
            scanf("%d", &searchRoll);

            for (i = 0; i < n; i = i + 1)
            {
                if (s[i].roll == searchRoll)
                {
                    printf("Student Found\n");
                    printf("Name: %s\n", s[i].name);
                    printf("Marks: %.2f\n", s[i].marks);
                    found = 1;
                }
            }

            if (found == 0)
            {
                printf("Student Not Found\n");
            }
        }
        else if (choice == 4)
        {
            int deleteRoll;
            int found;
            int j;

            found = 0;
            printf("Enter Roll Number to Delete: ");
            scanf("%d", &deleteRoll);

            for (i = 0; i < n; i = i + 1)
            {
                if (s[i].roll == deleteRoll)
                {
                    found = 1;

                    for (j = i; j < n - 1; j = j + 1)
                    {
                        s[j] = s[j + 1];
                    }

                    n = n - 1;
                }
            }

            if (found == 1)
            {
                printf("Student Deleted Successfully\n");
            }
            else
            {
                printf("Student Not Found\n");
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