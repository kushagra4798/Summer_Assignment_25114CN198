#include <stdio.h>

struct Ticket
{
    int ticketId;
    char passengerName[50];
    int seatNo;
    int isCancelled;
};

int main()
{
    struct Ticket t[100];
    int n;
    int i;
    int choice;

    n = 0;

    while (1)
    {
        printf("\n1. Book Ticket\n");
        printf("2. Display All Tickets\n");
        printf("3. Search Ticket by ID\n");
        printf("4. Cancel Ticket\n");
        printf("5. Delete Ticket Record\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            printf("Enter Ticket ID: ");
            scanf("%d", &t[n].ticketId);
            printf("Enter Passenger Name: ");
            scanf("%s", t[n].passengerName);
            printf("Enter Seat Number: ");
            scanf("%d", &t[n].seatNo);
            t[n].isCancelled = 0;
            n = n + 1;
            printf("Ticket Booked Successfully\n");
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
                    printf("Ticket ID: %d\n", t[i].ticketId);
                    printf("Passenger Name: %s\n", t[i].passengerName);
                    printf("Seat Number: %d\n", t[i].seatNo);

                    if (t[i].isCancelled == 1)
                    {
                        printf("Status: Cancelled\n");
                    }
                    else
                    {
                        printf("Status: Booked\n");
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
            printf("Enter Ticket ID to Search: ");
            scanf("%d", &searchId);

            for (i = 0; i < n; i = i + 1)
            {
                if (t[i].ticketId == searchId)
                {
                    printf("Ticket Found\n");
                    printf("Passenger Name: %s\n", t[i].passengerName);
                    printf("Seat Number: %d\n", t[i].seatNo);

                    if (t[i].isCancelled == 1)
                    {
                        printf("Status: Cancelled\n");
                    }
                    else
                    {
                        printf("Status: Booked\n");
                    }

                    found = 1;
                }
            }

            if (found == 0)
            {
                printf("Ticket Not Found\n");
            }
        }
        else if (choice == 4)
        {
            int cancelId;
            int found;

            found = 0;
            printf("Enter Ticket ID to Cancel: ");
            scanf("%d", &cancelId);

            for (i = 0; i < n; i = i + 1)
            {
                if (t[i].ticketId == cancelId)
                {
                    found = 1;

                    if (t[i].isCancelled == 1)
                    {
                        printf("Ticket is Already Cancelled\n");
                    }
                    else
                    {
                        t[i].isCancelled = 1;
                        printf("Ticket Cancelled Successfully\n");
                    }
                }
            }

            if (found == 0)
            {
                printf("Ticket Not Found\n");
            }
        }
        else if (choice == 5)
        {
            int deleteId;
            int found;
            int j;

            found = 0;
            printf("Enter Ticket ID to Delete: ");
            scanf("%d", &deleteId);

            for (i = 0; i < n; i = i + 1)
            {
                if (t[i].ticketId == deleteId)
                {
                    found = 1;

                    for (j = i; j < n - 1; j = j + 1)
                    {
                        t[j] = t[j + 1];
                    }

                    n = n - 1;
                }
            }

            if (found == 1)
            {
                printf("Ticket Record Deleted Successfully\n");
            }
            else
            {
                printf("Ticket Not Found\n");
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