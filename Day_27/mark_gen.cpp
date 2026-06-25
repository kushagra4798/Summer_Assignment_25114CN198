#include <stdio.h>

struct Marksheet
{
    int rollNo;
    char name[50];
    int marks1;
    int marks2;
    int marks3;
    int marks4;
    int marks5;
    int total;
    float percentage;
    char grade;
};

int main()
{
    struct Marksheet m[100];
    int n;
    int i;
    int choice;

    n = 0;

    while (1)
    {
        printf("\n1. Add Marksheet\n");
        printf("2. Display All Marksheets\n");
        printf("3. Search Marksheet by Roll Number\n");
        printf("4. Delete Marksheet\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            printf("Enter Roll Number: ");
            scanf("%d", &m[n].rollNo);
            printf("Enter Name: ");
            scanf("%s", m[n].name);
            printf("Enter Marks of Subject 1: ");
            scanf("%d", &m[n].marks1);
            printf("Enter Marks of Subject 2: ");
            scanf("%d", &m[n].marks2);
            printf("Enter Marks of Subject 3: ");
            scanf("%d", &m[n].marks3);
            printf("Enter Marks of Subject 4: ");
            scanf("%d", &m[n].marks4);
            printf("Enter Marks of Subject 5: ");
            scanf("%d", &m[n].marks5);

            m[n].total = m[n].marks1 + m[n].marks2 + m[n].marks3 + m[n].marks4 + m[n].marks5;
            m[n].percentage = (float)m[n].total / 5;

            if (m[n].percentage >= 90)
            {
                m[n].grade = 'A';
            }
            else if (m[n].percentage >= 75)
            {
                m[n].grade = 'B';
            }
            else if (m[n].percentage >= 60)
            {
                m[n].grade = 'C';
            }
            else if (m[n].percentage >= 40)
            {
                m[n].grade = 'D';
            }
            else
            {
                m[n].grade = 'F';
            }

            n = n + 1;
            printf("Marksheet Added Successfully\n");
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
                    printf("Roll No: %d\n", m[i].rollNo);
                    printf("Name: %s\n", m[i].name);
                    printf("Subject 1: %d\n", m[i].marks1);
                    printf("Subject 2: %d\n", m[i].marks2);
                    printf("Subject 3: %d\n", m[i].marks3);
                    printf("Subject 4: %d\n", m[i].marks4);
                    printf("Subject 5: %d\n", m[i].marks5);
                    printf("Total: %d\n", m[i].total);
                    printf("Percentage: %.2f\n", m[i].percentage);
                    printf("Grade: %c\n", m[i].grade);
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
                if (m[i].rollNo == searchRoll)
                {
                    printf("Marksheet Found\n");
                    printf("Name: %s\n", m[i].name);
                    printf("Subject 1: %d\n", m[i].marks1);
                    printf("Subject 2: %d\n", m[i].marks2);
                    printf("Subject 3: %d\n", m[i].marks3);
                    printf("Subject 4: %d\n", m[i].marks4);
                    printf("Subject 5: %d\n", m[i].marks5);
                    printf("Total: %d\n", m[i].total);
                    printf("Percentage: %.2f\n", m[i].percentage);
                    printf("Grade: %c\n", m[i].grade);
                    found = 1;
                }
            }

            if (found == 0)
            {
                printf("Marksheet Not Found\n");
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
                if (m[i].rollNo == deleteRoll)
                {
                    found = 1;

                    for (j = i; j < n - 1; j = j + 1)
                    {
                        m[j] = m[j + 1];
                    }

                    n = n - 1;
                }
            }

            if (found == 1)
            {
                printf("Marksheet Deleted Successfully\n");
            }
            else
            {
                printf("Marksheet Not Found\n");
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