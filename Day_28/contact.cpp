#include <stdio.h>

struct Contact
{
    int contactId;
    char name[50];
    char phoneNo[20];
    char email[50];
};

int main()
{
    struct Contact c[100];
    int n;
    int i;
    int choice;

    n = 0;

    while (1)
    {
        printf("\n1. Add Contact\n");
        printf("2. Display All Contacts\n");
        printf("3. Search Contact by ID\n");
        printf("4. Update Contact\n");
        printf("5. Delete Contact\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            printf("Enter Contact ID: ");
            scanf("%d", &c[n].contactId);
            printf("Enter Name: ");
            scanf("%s", c[n].name);
            printf("Enter Phone Number: ");
            scanf("%s", c[n].phoneNo);
            printf("Enter Email: ");
            scanf("%s", c[n].email);
            n = n + 1;
            printf("Contact Added Successfully\n");
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
                    printf("Contact ID: %d\n", c[i].contactId);
                    printf("Name: %s\n", c[i].name);
                    printf("Phone Number: %s\n", c[i].phoneNo);
                    printf("Email: %s\n", c[i].email);
                    printf("-----------------------\n");
                }
            }
        }
        else if (choice == 3)
        {
            int searchId;
            int found;

            found = 0;
            printf("Enter Contact ID to Search: ");
            scanf("%d", &searchId);

            for (i = 0; i < n; i = i + 1)
            {
                if (c[i].contactId == searchId)
                {
                    printf("Contact Found\n");
                    printf("Name: %s\n", c[i].name);
                    printf("Phone Number: %s\n", c[i].phoneNo);
                    printf("Email: %s\n", c[i].email);
                    found = 1;
                }
            }

            if (found == 0)
            {
                printf("Contact Not Found\n");
            }
        }
        else if (choice == 4)
        {
            int updateId;
            int found;

            found = 0;
            printf("Enter Contact ID to Update: ");
            scanf("%d", &updateId);

            for (i = 0; i < n; i = i + 1)
            {
                if (c[i].contactId == updateId)
                {
                    found = 1;
                    printf("Enter New Name: ");
                    scanf("%s", c[i].name);
                    printf("Enter New Phone Number: ");
                    scanf("%s", c[i].phoneNo);
                    printf("Enter New Email: ");
                    scanf("%s", c[i].email);
                    printf("Contact Updated Successfully\n");
                }
            }

            if (found == 0)
            {
                printf("Contact Not Found\n");
            }
        }
        else if (choice == 5)
        {
            int deleteId;
            int found;
            int j;

            found = 0;
            printf("Enter Contact ID to Delete: ");
            scanf("%d", &deleteId);

            for (i = 0; i < n; i = i + 1)
            {
                if (c[i].contactId == deleteId)
                {
                    found = 1;

                    for (j = i; j < n - 1; j = j + 1)
                    {
                        c[j] = c[j + 1];
                    }

                    n = n - 1;
                }
            }

            if (found == 1)
            {
                printf("Contact Deleted Successfully\n");
            }
            else
            {
                printf("Contact Not Found\n");
            }
        }
        else if (choice == 6)
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