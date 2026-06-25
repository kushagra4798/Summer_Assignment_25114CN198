#include <stdio.h>

struct Book
{
    int bookId;
    char title[50];
    char author[50];
    int isIssued;
};

int main()
{
    struct Book b[100];
    int n;
    int i;
    int choice;

    n = 0;

    while (1)
    {
        printf("\n1. Add Book\n");
        printf("2. Display All Books\n");
        printf("3. Search Book by ID\n");
        printf("4. Issue Book\n");
        printf("5. Return Book\n");
        printf("6. Delete Book\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            printf("Enter Book ID: ");
            scanf("%d", &b[n].bookId);
            printf("Enter Title: ");
            scanf("%s", b[n].title);
            printf("Enter Author: ");
            scanf("%s", b[n].author);
            b[n].isIssued = 0;
            n = n + 1;
            printf("Book Added Successfully\n");
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
                    printf("Book ID: %d\n", b[i].bookId);
                    printf("Title: %s\n", b[i].title);
                    printf("Author: %s\n", b[i].author);

                    if (b[i].isIssued == 1)
                    {
                        printf("Status: Issued\n");
                    }
                    else
                    {
                        printf("Status: Available\n");
                    }

                    printf("-----------------------\n");
                }
            }
        }
        else if (choice == 3)
        {
            int searchId;
            int found;

            found = 0;
            printf("Enter Book ID to Search: ");
            scanf("%d", &searchId);

            for (i = 0; i < n; i = i + 1)
            {
                if (b[i].bookId == searchId)
                {
                    printf("Book Found\n");
                    printf("Title: %s\n", b[i].title);
                    printf("Author: %s\n", b[i].author);

                    if (b[i].isIssued == 1)
                    {
                        printf("Status: Issued\n");
                    }
                    else
                    {
                        printf("Status: Available\n");
                    }

                    found = 1;
                }
            }

            if (found == 0)
            {
                printf("Book Not Found\n");
            }
        }
        else if (choice == 4)
        {
            int issueId;
            int found;

            found = 0;
            printf("Enter Book ID to Issue: ");
            scanf("%d", &issueId);

            for (i = 0; i < n; i = i + 1)
            {
                if (b[i].bookId == issueId)
                {
                    found = 1;

                    if (b[i].isIssued == 1)
                    {
                        printf("Book is Already Issued\n");
                    }
                    else
                    {
                        b[i].isIssued = 1;
                        printf("Book Issued Successfully\n");
                    }
                }
            }

            if (found == 0)
            {
                printf("Book Not Found\n");
            }
        }
        else if (choice == 5)
        {
            int returnId;
            int found;

            found = 0;
            printf("Enter Book ID to Return: ");
            scanf("%d", &returnId);

            for (i = 0; i < n; i = i + 1)
            {
                if (b[i].bookId == returnId)
                {
                    found = 1;

                    if (b[i].isIssued == 0)
                    {
                        printf("Book was Not Issued\n");
                    }
                    else
                    {
                        b[i].isIssued = 0;
                        printf("Book Returned Successfully\n");
                    }
                }
            }

            if (found == 0)
            {
                printf("Book Not Found\n");
            }
        }
        else if (choice == 6)
        {
            int deleteId;
            int found;
            int j;

            found = 0;
            printf("Enter Book ID to Delete: ");
            scanf("%d", &deleteId);

            for (i = 0; i < n; i = i + 1)
            {
                if (b[i].bookId == deleteId)
                {
                    found = 1;

                    for (j = i; j < n - 1; j = j + 1)
                    {
                        b[j] = b[j + 1];
                    }

                    n = n - 1;
                }
            }

            if (found == 1)
            {
                printf("Book Deleted Successfully\n");
            }
            else
            {
                printf("Book Not Found\n");
            }
        }
        else if (choice == 7)
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