#include <stdio.h>
#include <string.h>

int main()
{
    char bookName[50][30];
    int bookCount[50];
    int n;
    int i;
    int choice;
    int index;

    printf("Enter number of books: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter name of book %d: ", i + 1);
        scanf("%s", bookName[i]);

        printf("Enter number of copies: ");
        scanf("%d", &bookCount[i]);
    }

    do
    {
        printf("\n1. Issue Book\n");
        printf("2. Return Book\n");
        printf("3. Display Books\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            printf("Enter book index (0 to %d): ", n - 1);
            scanf("%d", &index);

            if (bookCount[index] > 0)
            {
                bookCount[index] = bookCount[index] - 1;
                printf("Book issued successfully.\n");
            }
            else
            {
                printf("Book not available.\n");
            }
        }
        else if (choice == 2)
        {
            printf("Enter book index (0 to %d): ", n - 1);
            scanf("%d", &index);

            bookCount[index] = bookCount[index] + 1;
            printf("Book returned successfully.\n");
        }
        else if (choice == 3)
        {
            for (i = 0; i < n; i++)
            {
                printf("Book: %s, Copies: %d\n", bookName[i], bookCount[i]);
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