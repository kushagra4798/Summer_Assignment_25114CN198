#include <stdio.h>
#include <string.h>

int main()
{
    int roll[50];
    char name[50][30];
    float marks[50];
    int n;
    int i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter roll number of student %d: ", i + 1);
        scanf("%d", &roll[i]);

        printf("Enter name of student %d: ", i + 1);
        scanf("%s", name[i]);

        printf("Enter marks of student %d: ", i + 1);
        scanf("%f", &marks[i]);
    }

    printf("\nStudent Records:\n");
    for (i = 0; i < n; i++)
    {
        printf("Roll No: %d\n", roll[i]);
        printf("Name: %s\n", name[i]);
        printf("Marks: %.2f\n", marks[i]);
        printf("\n");
    }

    return 0;
}